//
// Created by haojun on 1/20/21.
//

#ifndef PROJ_TEST_2_HPP
#define PROJ_TEST_2_HPP

#include "GeneralTest.hpp"
/**
 * This class contains a concrete test case which can be called, namely Test_2.
 * It corresponds to the toy data sample test2.dat in the data repository.
 */
class Test_2:public Test{
public:
    /**
     * default constructor
     */
    Test_2();

    /**
     * This function controls how the specific Test_2 will proceed, using the corresponding data.
     */
    void RunTest() override;
};

#endif //PROJ_TEST_2_HPP
