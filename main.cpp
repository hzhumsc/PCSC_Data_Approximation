#include <iostream>
#include "Data.hpp"
#include "Approximator.hpp"
#include <Eigen/Dense>
#include "Matrix.hpp"

int main() {
    Data d;

    std::string file_name, output, path, test1, test2, test3, test4;
    std::vector<double> dx, dy;
    std::vector<double> x, y_standard, y_app;
    file_name = "../data/test4.dat";
    output = "../data/test4_app.dat";

    d.read_file(file_name);
    dx = d.get_dx();
    dy = d.get_dy();
    Approximator app(dx, dy);
    std::vector<double> coefs;
    coefs = app.least_squares(dx.size()-2, 0.0001);
    for (int i = 0; i< coefs.size(); i++){
        std::cout<<coefs[i]<<" "<<std::endl;
    }

    x = d.generate_x(401, dx[0], dx[dx.size()-1]);
    y_app = app.ls_val(coefs, x);

    d.write_file(output, x, y_app);
    return 0;
}
//int main(){
//    Data d;
//    std::string test1, test2, test3, test4;
//    std::vector<double> x, y_std1, y_std2, y_std3, y_std4, y_app;
//    test1 = "../data/test1.dat";
//    test2 = "../data/test2.dat";
//    test3 = "../data/test3.dat";
//    test4 = "../data/test4.dat";
//
//    x = d.generate_x(101, -20.0, 20.0);
//    y_std1 = d.generate_y(1, x);
//    d.write_file(test1, x, y_std1);
//    y_std2 = d.generate_y(2, x);
//    d.write_file(test2, x, y_std2);
//    y_std3 = d.generate_y(3, x);
//    d.write_file(test3, x, y_std3);
//    y_std4 = d.generate_y(4, x);
//    d.write_file(test4, x, y_std4);
//
//
//    return 0;
//}
