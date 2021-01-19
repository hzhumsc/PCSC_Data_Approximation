//
// Created by haojun on 11/22/20.
//

#include "Data.hpp"
#include <cmath>

Data::Data() = default;

void Data::read_file(std::string &file_name) {
    std::ifstream infile(file_name);

    double x,y;

    while(!infile.eof()){
        infile>>x>>y;
        dx.push_back(x);
        dy.push_back(y);
    }
    infile.close();

}

void Data::write_file(std::string &file_name, std::vector<double> x, std::vector<double> y) {
    int n = x.size();
    std::ofstream outfile;
    outfile.open(file_name);
    outfile.precision(8);
    for(int i=0; i<n; i++){
        if (i<n-1) {
            outfile << x[i] << " " << y[i] << "\n";
        }
        else{
            outfile << x[i] << " " << y[i];
        }
    }
    outfile.close();
}

std::vector<double> Data::get_dx() const {
    return dx;
}

std::vector<double> Data::get_dy() const {
    return dy;
}

std::vector<double> Data::generate_x(int n_pts, double x_begin, double x_end) const {
    double step;
    step = (x_end - x_begin)/(n_pts - 1);
    double x_value = x_begin;
    std::vector<double> x;
    for (int i=0; i<n_pts; i++){
        x.push_back(x_value);
        x_value = x_value + step;
    }
    return x;
}

std::vector<double> Data::generate_y(int fct, std::vector<double> x) const {
    std::vector<double> y;
    double y_value;
    int n_pts = x.size();
    if(fct == 1){
        for(int i=0; i<n_pts; i++){
            y_value = exp(x[i]);
            y.push_back(y_value);
        }
    }
    else if(fct == 2){
        for(int i=0; i<n_pts; i++){
            y_value = pow(x[i], 3) + pow(x[i], 2) + x[i] + 1;
            y.push_back(y_value);
        }
    }
    else if(fct == 3){
        for(int i=0; i<n_pts; i++){
            y_value = 1/(1+25*pow(x[i], 2));
            y.push_back(y_value);
        }
    }
    else if(fct == 4){
        for(int i=0; i<n_pts; i++){
            y_value = cos(M_PI * pow(fabs(x[i]), 0.5));
            y.push_back(y_value);
        }
    }
    return y;
}