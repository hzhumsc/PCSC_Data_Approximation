//
// Created by haojun on 1/19/21.
//

#ifndef PROJ_GENERALTEST_HPP
#define PROJ_GENERALTEST_HPP

#include <iostream>
#include "../src/Approximator.hpp"
#include "../src/Data.hpp"
/**
 * This class is used for creating a test object.
 * And the test object will give a way to read the specified data, which will be passed to other classes.
 */
class Test{
public:
    /**
     * default constructor
     */
    Test();

    /**
     * This function controls how the test will proceed, it can be override in different test cases.
     */
    virtual void RunTest();

};
#endif //PROJ_GENERALTEST_HPP
