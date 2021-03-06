//
// Created by haojun on 1/20/21.
//

#include "Test_2.hpp"

Test_2::Test_2()  = default;

void Test_2::RunTest() {
    std::string file_name, output_path;
    file_name = "../data/test2.dat";
    std::vector<double> dx, dy;

    Data d;
    d.read_file(file_name);
    dx = d.get_dx();
    dy = d.get_dy();

    Approximator app(dx, dy);
    int N = dx.size();

    int method;
    std::cout<<"Please choose the numerical method you want to use: "<<std::endl;
    std::cout<<"1-"<<"Polynomial approximation"<<std::endl;
    std::cout<<"2-"<<"Piecewise linear polynomial interpolation"<<std::endl;
    std::cout<<"3-"<<"Piecewise cubic polynomial interpolation"<<std::endl;
    std::cin>>method;
    if (method == 1){
        output_path = "../data/test2_polynomial.dat";
        std::vector<double> coef;
        int degree;
        std::cout<<"Please choose the degree"<<std::endl;
        std::cout<<"Note that the length of the data sequence is "<<N<<std::endl;
        std::cout<<"And the degree should not be greater than "<<N-1<<std::endl;
        std::cin >> degree;

        if(degree == N-1){
            coef = app.polynomial(degree);
        }
        else{
            coef = app.least_squares(degree, 0.0001);
        }
        std::vector<double> x, y_app;
        int n_nodes;
        n_nodes = 10*N;
        x = d.generate_x(n_nodes, dx[0], dx[dx.size()-1]);
        y_app = app.polynomial_val(coef, x);
        d.write_file(output_path, x, y_app);
        std::cout<<"Finished."<<std::endl;
    }
    else if (method == 2){
        output_path = "../data/test2_linear_interp.dat";
        std::vector<double> x, y_app;
        int n_nodes;
        n_nodes = 10*N;
        x = d.generate_x(n_nodes, dx[0], dx[dx.size()-1]);
        y_app = app.piecewise_linear_poly(x);
        d.write_file(output_path, x, y_app);
        std::cout<<"Finished."<<std::endl;
    }
    else if (method == 3){
        output_path = "../data/test2_cubic_interp.dat";
        std::vector<double> x, y_app;
        int n_nodes;
        n_nodes = 10*N;
        x = d.generate_x(n_nodes, dx[0], dx[dx.size()-1]);
        y_app = app.piecewise_cubic_poly(x);
        d.write_file(output_path, x, y_app);
        std::cout<<"Finished."<<std::endl;
    }
}