#include <iostream>
#include "Data.hpp"
#include "Approximator.hpp"
#include <Eigen/Dense>
#include "Matrix.hpp"

int main() {
    Data d;

    std::string file_name, output, path;
    std::vector<double> dx, dy;
    std::vector<double> x, y_standard, y_app;
    file_name = "../data/test1.dat";
    output = "../data/test1_standard.dat";
    path = "../data/test1_app.dat";
    d.read_file(file_name);
    dx = d.get_dx();
    dy = d.get_dy();
    Approximator app(dx, dy);
    std::vector<double> coefs;
    coefs = app.polynomial(6, 0.001);

    std::cout<<coefs[2]<<" "<<std::endl;
    x = d.generate_x(201, -10.0, 10.0);
    y_app = app.piecewise_linear_poly(x);
    y_standard = d.generate_y(2,x);

    d.write_file(path, x, y_app);
    d.write_file(output, x, y_standard);
    return 0;
}

