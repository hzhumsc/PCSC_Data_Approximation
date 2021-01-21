//
// Created by haojun on 1/20/21.
//

#ifndef PROJ_TEST_4_HPP
#define PROJ_TEST_4_HPP

#include "GeneralTest.hpp"
/**
 * This class contains a concrete test case which can be called, namely Test_4.
 * It corresponds to the toy data sample test4.dat in the data repository.
 */
class Test_4:public Test{
public:
    /**
     * default constructor
     */
    Test_4();

    /**
     * This function controls how the specific Test_4 will proceed, using the corresponding data.
     */
    void RunTest() override;
};

#endif //PROJ_TEST_4_HPP
