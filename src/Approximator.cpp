//
// Created by haojun on 12/1/20.
//
#include <stdexcept>
#include <iostream>
#include <cmath>
#include "Approximator.hpp"

Approximator::Approximator(std::vector<double> x, std::vector<double> y) {
    int m,n;
    m = x.size();
    n = y.size();
    if(m!=n){
        throw std::invalid_argument("!size of the data are not compatible here");
    }
    for(int i=0; i<m; i++){
        dx.push_back(x[i]);
        dy.push_back(y[i]);
    }
}

std::vector<double> Approximator::polynomial(int degree) const{


    int N = dx.size();
    std::vector<double> w;
    Matrix A(N, degree + 1);
    for (int i = 0; i<N; i ++){
        for(int j = 0; j< degree + 1; j++){
            A[i][j] = pow(dx[i], j);
        }
    }

    w = gauss_solve(A, dy);

    return w;
}

std::vector<double> Approximator::polynomial_val(std::vector<double> Coef, std::vector<double> x) const{

    int n_pts = x.size();
    int n_coefs = Coef.size();

    Matrix X(n_pts, n_coefs);
    std::vector<double> y_app;
    // construct the matrix X
    for (int i=0; i<n_pts; i++){
        for (int j=0; j<n_coefs; j++){
            X[i][j] = pow(x[i], j);
        }
    }
    y_app = X * Coef;

    return y_app;
}

int Approximator::locate(double x_value) const {
    int count = -1;
    int end = dx.size();

    if (x_value < dx[0]){
        return count;
    }
    count = count + 1;

    while(count < end){
        if(x_value < dx[count + 1]){
            break;
        }
        count = count + 1;
    }
    return count;
}

std::vector<double> Approximator::piecewise_linear_poly(std::vector<double> x) const {
    int end = dx.size();
    std::vector<double> y;
    std::vector<double> s(end-1);

    for(int i=0; i<end; i++){
        s[i] = (dy[i+1] - dy[i])/(dx[i+1] - dx[i]);
    }
    double interp;
    for(auto x_value: x){
        int loc;
        loc = locate(x_value);
        if(loc < end-1){
            if(loc == -1){
                interp = dy[0] + s[0] * (x_value - dx[0]);
            }
            else{
                interp = dy[loc] + s[loc] * (x_value - dx[loc]);
            }
        }
        else{
            interp = dy[end-1] + s[end-2] * (x_value - dx[end-1]);
        }
        y.push_back(interp);
    }
    return y;
}

std::vector<double> Approximator::piecewise_cubic_poly(std::vector<double> x) const {
    int N = dx.size();
    int dim = 4*(N-1);

    Matrix A(dim, dim);
    std::vector<double> b(dim);


    // for a natural interpolating cubic spline, s''(x0) = 0
    A[0][0] = 6*dx[0]; A[0][1] = 2.0; b[0] = 0.0;
    A[1][0] = pow(dx[0], 3); A[1][1] = pow(dx[0], 2); A[1][2] = dx[0]; A[1][3] = 1.0; b[1] = dy[0];

    int n_row = 2; int n_col = 0;
    double x_val, x_val_2, x_val_3;
    for (int i=1; i<N-1; i++){
        x_val = dx[i];
        x_val_2 = pow(x_val, 2);
        x_val_3 = pow(x_val, 3);

        A[n_row][n_col] = x_val_3; A[n_row][ n_col+1] = x_val_2; A[n_row][ n_col+2] = x_val; A[n_row][ n_col+3] = 1.0; b[n_row] = dy[i];

        A[n_row+1][n_col+4] = x_val_3; A[n_row+1][n_col+5] = x_val_2; A[n_row+1][n_col+6] = x_val; A[n_row+1][n_col+7] = 1.0; b[n_row+1] = dy[i];

        A[n_row+2][ n_col] = 3*x_val_2; A[n_row+2][n_col+1] = 2*x_val; A[n_row+2][n_col+2] = 1.0;
        A[n_row+2][n_col+4] = -3*x_val_2; A[n_row+2][n_col+5]= -2*x_val; A[n_row+2][n_col+6] = -1.0; b[n_row+2] = 0.0;

        A[n_row+3][n_col] = 6*x_val; A[n_row+3][n_col+1] = 2.0; A[n_row+3][n_col+4] = -6*x_val; A[n_row+3][n_col+5]= -2.0; b[n_row+3] = 0.0;

        n_row = n_row + 4;
        n_col = n_col + 4;
    }

    // for a natural interpolating cubic spline, s''(xn) = 0
    A[dim-2][dim-4] = pow(dx[N-1], 3); A[dim-2][dim-3] = pow(dx[N-1], 2); A[dim-2][dim-2] = dx[N-1]; A[dim-2][dim-1] = 1.0; b[dim-2] = dy[N-1];
    A[dim-1][dim-4] = 6*dx[N-1]; A[dim-1][dim-3] = 2.0; b[dim-1] = 0.0;

    std::vector<double> coef;
    coef = gauss_solve(A, b);

    std::vector<double> y;
    double interp;
    for (auto x_value: x){
        int loc;
        loc = locate(x_value);
        if(loc < N-1){
            if(loc == -1){
                interp = coef[0] * pow(x_value, 3) + coef[1] * pow(x_value, 2) + coef[2] * x_value + coef[3];
            }
            else{
                interp = coef[4*loc] * pow(x_value, 3) + coef[4*loc+1] * pow(x_value, 2) + coef[4*loc+2] * x_value + coef[4*loc+3];
            }
        }
        else{
            interp = coef[dim-4] * pow(x_value,3) + coef[dim-3] * pow(x_value, 2) + coef[dim-2] * x_value + coef[dim-1];
        }
        y.push_back(interp);
    }

    return y;
}

std::vector<double> Approximator::least_squares(int degree, double s) const {

//    int n_coef = degree + 1;
//    int n_pts = dx.size();
//
//    Matrix X(n_pts, n_coef);
//
//
//    // construct the Vandermonde matrix
//    for (int i; i<n_pts; i++){
//        for (int j; j<n_coef; j++){
//            X[i][j] = pow(dx[i], j);
//        }
//    }

//    Matrix A(n_coef, n_coef);
//    std::vector<double> q(n_coef);
//
//    A = X.transpose()*X;
//    q = X.transpose()*y;

//    std::vector<double> coef;
//    coef = least_square(X, dy, s);


    int N = dx.size();
    std::vector<double> w;
    Matrix A(N, degree + 1);
    for (int i = 0; i<N; i ++){
        for(int j = 0; j< degree + 1; j++){
            A[i][j] = pow(dx[i], j);
        }
    }

    w = ls(A, dy, s);

    return w;

//    return coef;
}
