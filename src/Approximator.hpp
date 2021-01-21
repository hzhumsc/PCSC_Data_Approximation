//
// Created by haojun on 12/1/20.
//

#ifndef PROJ_APPROXIMATOR_HPP
#define PROJ_APPROXIMATOR_HPP

#include <Eigen/Dense>
#include <vector>
#include "Matrix.hpp"

/**
 * This class contains implementations of data approximation methods. It takes the data read by the class Data.
 * It gives the approximation of the values of y_i according to the chosen approximation methods.
 * There are 3 available methods: polynomial approximation, linear piecewise polynomial interpolation
 * and cubic piecewise polynomial interpolation.
 */
class Approximator{
private:
    /**
     * a vector containing the values of x_i
     */
    std::vector<double> dx;

    /**
     * a vector containing the corresponding values y_i of x_i
     */
    std::vector<double> dy;
public:
    /**
     * Constructor of an Approximator object. It takes the vectors of dx and dy.
     * @param x a vector containing the values of x_i
     * @param y a vector containing the corresponding values y_i of x_i
     */
    Approximator(std::vector<double> x, std::vector<double> y);

    /**
     * This function implements the polynomial approximation. It will be called, if the user chooses the polynomial approximation
     * from the user interface and the chosen degree of approximation polynomials is equal to N-1, where N is the length of the vectors dx and dy.
     * @param degree the degree of the approximation polynomial
     * @return the coefficients of the polynomial, given by the numerical algorithm
     */
    std::vector<double> polynomial(int degree) const;

    /**
     * This function computes the approximated values of y_i, given the coefficients of the approximated polynomial and the values of x_i.
     * @param Coef the coefficients of the polynomial, given by the numerical algorithm
     * @param x a vector of the values of x_i of the data
     * @return a vector of the approximated values of y_i
     */
    std::vector<double> polynomial_val(std::vector<double> Coef, std::vector<double> x) const;

    /**
     * This function locates the x_i in the sequence of x_i's in increasing order, it serves as part of the interpolation algorithm.
     * @param x_value the value of x_i
     * @return the position of this value of x_i in the increasing sequence
     */
    int locate(double x_value) const;

    /**
     * This function implements the linear piecewise polynomial interpolation methods.
     * @param x a vector of the values of x_i of the data
     * @return a vector of the approximated values of y_i
     */
    std::vector<double> piecewise_linear_poly(std::vector<double> x) const;

    /**
     * This function implements the cubic piecewise polynomial interpolation methods.
     * @param x a vector of the values of x_i of the data
     * @return a vector of the approximated values of y_i
     */
    std::vector<double> piecewise_cubic_poly(std::vector<double> x) const;

    /**
     * This function implements the least squres data fitting methods. It will be called,
     * if the user chooses the polynomial approximation from the user interface ans the chosen degree of approximation polynomials
     * is smaller than N-1, where N is the length of the vectors dx and dy.
     * @param degree the degree of the approximation polynomial
     * @param s a small positive value to keep the linear solver algorithm stable
     * @return the coefficients of the polynomials, given by the numerical algorithm
     */
    std::vector<double> least_squares(int degree, double s) const;

};

#endif //PROJ_APPROXIMATOR_HPP
