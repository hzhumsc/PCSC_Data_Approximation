//
// Created by haojun on 11/22/20.
//

#include "Data.hpp"


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