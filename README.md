# PCSC_Data_Approximation

Group 6: Haojun Zhu
### 1. Overview
In this project, I aim to implement a method to read the input data in text files and some basic data approxiamtion algorithms in C++. Currently, there are 3 methods available:
- polynomial approximation
- piecewise linear polynomial interpolation 
- piecewise cubic polynomial interpolation

If the user chooses to use the polynomial approximation method, for the data fitting, the least squares method will be applied if the degree chosen by the user is smaller than N-1, where N is the total number of the data points.

### 2. How to Compile
Once the project is cloned to your PC, 
Then, go to the main project folder, please follow following commands to generate makefile from cmakelist and build the project (including compling, linking).

	mkdir build
	cd build
	cmake ..
	make

Then, run the following command to run the executable file.

	./Non_Linear_Systems
