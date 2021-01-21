//
// Created by haojun on 1/19/21.
//

#ifndef PROJ_TEST_1_HPP
#define PROJ_TEST_1_HPP

#include "GeneralTest.hpp"
/**
 * This class contains a concrete test case which can be called, namely Test_1.
 * It corresponds to the toy data sample test1.dat in the data repository.
 */
class Test_1:public Test{
public:
    /**
     * default constructor
     */
    Test_1();

    /**
     * This function controls how the specific Test_1 will proceed, using the corresponding data.
     */
    void RunTest() override;
};
#endif //PROJ_TEST_1_HPP
