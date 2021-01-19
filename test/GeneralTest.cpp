//
// Created by haojun on 1/19/21.
//

#include "GeneralTest.hpp"

Test::Test()  = default;

void Test::RunTest() {
    std::string file_name, output_path;
    std::vector<double> dx, dy;
    std::cout<<"Please enter the location of the data file:"<<std::endl;
    std::cin>>file_name;
    std::cout<<"Please enter the location of the output approximation file"<<std::endl;
    std::cin>>output_path;

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
    }
    else if (method == 2){

    }
}