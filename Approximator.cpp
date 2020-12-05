//
// Created by haojun on 12/1/20.
//
#include <stdexcept>
#include <cmath>
#include "Approximator.hpp"

Approximator::Approximator(std::vector<double> x, std::vector<double> y) {
    int m,n;
    m = x.size();
    n = y.size();
    if(m!=n){
        throw std::invalid_argument("!size of the data are not compatible here");
    }
    for(int i=0; i++; i<m){
        dx.push_back(x[i]);
        dy.push_back(y[i]);
    }
}

std::vector<double> Approximator::polynomial(int degree) const{
    using namespace Eigen;

    int n_coef = degree + 1;
    int n_pts = dx.size();

    MatrixXf X(n_pts, n_coef);
    MatrixXf Y(n_pts, 1);

    // construct the Y vector
    for (int i; i<n_pts; i++){
        Y(i,0) = dy[i];
    }

    // construct the Vandermonde matrix
    for (int i; i<n_pts; i++){
        for (int j; j<n_coef; j++){
            X(i,j) = pow(dx[i], j);
        }
    }

    VectorXf coefs;
    coefs = X.colPivHouseholderQr().solve(Y);

    std::vector<double> Coef(coefs.data(), coefs.data()+coefs.size());
    return Coef;
}

std::vector<double> Approximator::polynomial_val(std::vector<double> Coef, std::vector<double> x) const{
    using namespace Eigen;

    int n_pts = x.size();
    int n_coefs = Coef.size();

    MatrixXf X(n_pts, n_coefs);
    MatrixXf C(n_coefs, 1);
    MatrixXf Y(n_pts, 1);
    // construct the matrix X
    for (int i=0; i<n_pts; i++){
        for (int j=0; j<n_coefs; j++){
            X(i, j) = pow(x[i], j);
        }
    }
    // construct C
    for (int i=0; i<n_coefs; i++){
        C(i, 0) = Coef[i];
    }

    Y = X * C;

    VectorXf y(n_pts);

    for(int i=0; i<n_pts; i++){
        y(i) = Y(i,0);
    }

    std::vector<double> y_app(y.data(), y.data()+y.size());
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

std::vector<double> Approximator::piecewise_linear_poly(std::vector<double> x, int) const {
    
}
