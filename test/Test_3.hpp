//
// Created by haojun on 1/20/21.
//

#ifndef PROJ_TEST_3_HPP
#define PROJ_TEST_3_HPP

#include "GeneralTest.hpp"
/**
 * This class contains a concrete test case which can be called, namely Test_3.
 * It corresponds to the toy data sample test3.dat in the data repository.
 */
class Test_3:public Test{
public:
    /**
     * default constructor
     */
    Test_3();

    /**
     * This function controls how the specific Test_3 will proceed, using the corresponding data.
     */
    void RunTest() override;
};

#endif //PROJ_TEST_3_HPP
