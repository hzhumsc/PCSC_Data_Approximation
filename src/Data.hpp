//
// Created by haojun on 11/22/20.
//

#ifndef PROJ_DATA_HPP
#define PROJ_DATA_HPP

#include <iostream>
#include <fstream>
#include <vector>

/**
 * This class is used for reading data and convert data into the form can be used by the other classes.
 */
class Data{
private:
    /**
     * This vector contains the values of x_i of the target data.
     */
    std::vector<double> dx;

    /**
     * This vector contains the values of y_i of the target data.
     */
    std::vector<double> dy;

public:
    /**
     * default constructor
     */
    Data();

    /**
     * This function reads the data file according to the given path and file name.
     * It converts the raw data into vectors and saves them as dx, dy, respectively.
     * @param file_name the name of the file, and it has to be a valid path
     */
    void read_file(std::string &file_name);

    /**
     * This function writes the vectors dx,dy into a .dat data file according to the given file name and path.
     * @param file_name the name of the file, and it has to be a valid path
     * @param dx a vector containing the values of x_i
     * @param dy a vector containing the values of corresponding y_i
     */
    void write_file(std::string &file_name, std::vector<double> dx, std::vector<double> dy);

    /**
     * This function gives access to the stored private member dx.
     * @return a vector, which is the private member dx
     */
    std::vector<double> get_dx() const;

    /**
     * This function gives access to the stored private member dy.
     * @return a vector, which is the private member dy
     */
    std::vector<double> get_dy() const;

    /**
     * This function generates a vector of scalars, and the numbers are equally spaced.
     * @param n_pts the length of the vector(the numbers of points)
     * @param x_begin the first value of the sequence
     * @param x_end the last value of the sequence
     * @return a vector containing equally spaced values of x_i
     */
    std::vector<double> generate_x(int n_pts, double x_begin, double x_end) const;

    /**
     * This function generates a vector of scalars, which are the corresponding y_i.
     * There are pre-defined functions, for generating the y_i for the 4 test cases.
     * @param fct the function model
     * @param x the vector of the x_i values
     * @return a vector containing corresponding values of y_i
     */
    std::vector<double> generate_y(int fct, std::vector<double> x) const;
};
#endif //PROJ_DATA_HPP
