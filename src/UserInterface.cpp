//
// Created by haojun on 1/19/21.
//

#include "UserInterface.hpp"
#include <iostream>
#include "../test/GeneralTest.hpp"
#include "../test/Test_1.hpp"
#include "../test/Test_2.hpp"
#include "../test/Test_3.hpp"
#include "../test/Test_4.hpp"

void UserInterface()
{
    std::string command;
    std::cout<<"PCSC Data Approximator"<<std::endl;
    std::cout<<"------------------------------------------------------------------------"<<std::endl;
    WelcomeInfo();
    std::cin>>command;
    std::cout<<"------------------------------------------------------------------------"<<std::endl;
    while(true)
    {
        if(command=="1")
        {
            Test test;
            test.RunTest();
        }
        else if(command=="2")
        {
            int n_test;
            std::cout<<"Which data you want to test, please enter an integer in [1, 4] that corresponds to our toy data."<<std::endl;
            std::cout<<">>";
            std::cin>>n_test;
            if(n_test == 1){
                Test_1 test1;
                test1.RunTest();
            }
            else if(n_test == 2){
                Test_2 test2;
                test2.RunTest();
            }
            else if(n_test == 3){
                Test_3 test3;
                test3.RunTest();
            }
            else if(n_test == 4){
                Test_4 test4;
                test4.RunTest();
            }
            else{
                std::cout<<"Invalid Command, Please check again."<<std::endl;
                std::cout<<"------------------------------------------------------------------------"<<std::endl;
            }
        }
        else if(command=="3"||command =="exit")
        {
            std::cout<<"PCSC Data Approximator exit."<<std::endl;
            std::cout<<"------------------------------------------------------------------------"<<std::endl;
            break;
        }
        else{
            std::cout<<"Invalid Command, Please check again."<<std::endl;
            std::cout<<"------------------------------------------------------------------------"<<std::endl;
        }
        WelcomeInfo();
        std::cin>>command;
    }
}

void WelcomeInfo()
{
    std::cout<<"There are several modes you can choose."<<std::endl;
    std::cout<<"1-"<<"Test from your own data files."<<std::endl;
    std::cout<<"2-"<<"Test from existing toy test cases."<<std::endl;
    std::cout<<"3-"<<"Exit"<<std::endl;
    std::cout<<R"(Please type in the mode you want to choose or type "4" or "exit" to exit)"<<std::endl;
    std::cout<<"------------------------------------------------------------------------"<<std::endl;
    std::cout<<">>";
}
