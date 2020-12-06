//
// Created by haojun on 11/22/20.
//

#include "Data.hpp"
#include <cmath>

Data::Data() = default;

void Data::read_file(std::string &file_name) {
    std::ifstream infile;
    infile.open(file_name);

    double x,y;
    char c;
    while(!infile.eof()){
        infile.get(c);
        if(c != '\n'){
            infile>>x>>y;
            dx.push_back(x);
            dy.push_back(y);
        }

    }
    infile.close();

}

void Data::write_file(std::string &file_name, std::vector<double> dx, std::vector<double> dy) {
    int n = dx.size();
    std::ofstream outfile;
    outfile.open(file_name);
    for(int i=0; i<n; i++){
        outfile<<dx[i]<<" "<<dy[i]<<"\n";
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
            y_value = sin(M_PI * x[i])/(M_PI * x[i]);
            y.push_back(y_value);
        }
    }
    return y;
}