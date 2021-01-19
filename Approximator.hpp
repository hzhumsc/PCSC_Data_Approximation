//
// Created by haojun on 12/1/20.
//

#ifndef PROJ_APPROXIMATOR_HPP
#define PROJ_APPROXIMATOR_HPP

#include <Eigen/Dense>
#include <vector>
#include "Matrix.hpp"

class Approximator{
private:
    std::vector<double> dx;
    std::vector<double> dy;
public:
    Approximator(std::vector<double> x, std::vector<double> y);
    std::vector<double> polynomial(int degree) const;
    std::vector<double> polynomial_val(std::vector<double> Coef, std::vector<double> x) const;
    int locate(double x_value) const;
    std::vector<double> piecewise_linear_poly(std::vector<double> x) const;
    std::vector<double> piecewise_cubic_poly(std::vector<double> x) const;
    std::vector<double> least_squares(int degree, double s) const;

};

#endif //PROJ_APPROXIMATOR_HPP
