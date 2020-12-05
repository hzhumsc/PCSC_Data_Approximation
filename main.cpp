#include <iostream>
#include "Data.hpp"
#include <Eigen/Dense>

int main() {
    Data d;
    std::string file_name, output;
    std::vector<double> dx, dy;
    file_name = "../data/data.dat";
    output = "../data/output.dat";
    d.read_file(file_name);
    dx = d.get_dx();
    dy = d.get_dy();
    d.write_file(output, dx, dy);
    return 0;
}
