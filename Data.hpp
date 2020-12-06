//
// Created by haojun on 11/22/20.
//

#ifndef PROJ_DATA_HPP
#define PROJ_DATA_HPP

#include <iostream>
#include <fstream>
#include <vector>

class Data{
private:
    std::vector<double> dx;
    std::vector<double> dy;

public:
    Data();
    void read_file(std::string &file_name);
    void write_file(std::string &file_name, std::vector<double> dx, std::vector<double> dy);
    std::vector<double> get_dx() const;
    std::vector<double> get_dy() const;
    std::vector<double> generate_x(int n_pts, double x_begin, double x_end) const;
    std::vector<double> generate_y(int fct, std::vector<double> x) const;


//    friend std::ostream& operator<<(const Data &other) const;
};
#endif //PROJ_DATA_HPP
