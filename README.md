# PCSC_Data_Approximation

Group 6: Haojun Zhu
### 1. Overview
In this project, I aim to implement a method to read the input data in text files and some basic data approxiamtion algorithms in C++. Currently, there are 3 methods available:
- polynomial approximation
- piecewise linear polynomial interpolation 
- piecewise cubic polynomial interpolation

If the user chooses to use the polynomial approximation method, for the data fitting, the least squares method will be applied if the degree chosen by the user is smaller than N-1, where N is the total number of the data points.

### 2. Structure

The project includes two parts. The first part is the implementation of user interface class **UserInterface**,  the data I/O control class **Data**, the data approximator class **Approximator** and a class for the linear algebra computation **Matrix**. The second part is a family of test classes which includes the base test class ( **GeneralTest** ) and other dervied classes using the pre-defined toy data samples( e.g. **Test_1**). 

- src
	- UserInterface
	- Data
	- Approximator
	- Matrix
- test
	- GeneralTest
	- Test_1
	- Test_2
	- Test_3
	- Test_4


### 3. How to Compile
Once the project is cloned to your PC, go to the project folder and open a terminal. Otherwise, you can find the path to the project folder by the terminal which might be opened in other location.Then, please follow the following commands to generate makefile from cmakelist and build the project (including compiling, linking).

	mkdir build
	cd build
	cmake ..
	make

Then, enter the following command to run the executable file.

	./proj

### 4. How to Use

When the compiling, linking and generating is done. The program is executive. In the executive program, user can choose two different ways to use. Each of them have input standards. **Please follow the standards.**

- Using the new data given by the user.
- Testing the result of our prepared test cases.

#### A. Using the new data given by the user
If the user wants to test the output according to their own data samples, the user should first put the data file in the folder **data** under the project repository and run the executable `./proj`.

The user interface will ask the user to choose the working mode and the user should choose mode `1` in this case. Then, the user interface will ask for the path of the data file, and if it's already put in the data file, then the user should enter `../data/name_of_the_data_file.dat`. Similarily, the user can enter the path of the output file as `../data/name_of_the_ouput.dat` when the interface asks about it.

After that, it will ask for the exact type of method the user wants to use, the user can choose from 1 to 3, corresponding to the 3 methods we have implemented. Note that, if the user chooses the polynomial approximation method, he/she should mention the degree of polynomials and the user interface will give an information about the maximum degree can be chosen. If the user chooses the maximum degree, the normal polynomial approximation method will be applied; otherwise, the least squares method for data fitting will be applied.

#### B. Testing the result of our prepared test cases
In the project, there are already some pre-defined test cases. There are 4 data samples are already present in the folder **data** under the project repository. Users can directly use these 4 cases to see how this program works. 

User doesn't have to specify the path of the data file and the output path in this case. And the process of choosing the approximation methods is the same as the case when the user chooses to use his/her own data files.

### 5. The pre-defined data samples

There are 4 pre-defined data samples. The values of `x_i` are the same 101 equally spaced points ranging from -20 to 20.

##### data sample 1
The values of `y_i` are generated from the function f(x) = exp(x).
##### data sample 2
The values of `y_i` are generated from the function f(x) = x^3 + x^2 x + 1.
##### data sample 3
The values of `y_i` are generated from the function f(x) = 1/(1 + 25 * x^2).
##### data sample 4
The values of `y_i` are generated from the function f(x) = cos(pi * (abs(x)^0.5)).



