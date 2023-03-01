#pragma once
#include <string>

class Calculator {
public: 
    void setNumbers(int first, int second);
    int add();
    int subtract();
    int multiply();
    double divide();
    void calculate();


private:
    int firstNumber;
    int secondNumber;
};