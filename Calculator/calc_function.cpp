#include "Calculator.h"

void Calculator::setNumbers(int first, int second){
    firstNumber = first;
    secondNumber = second;
}


int Calculator::add() {
    return firstNumber + secondNumber;
}

int Calculator::subtract() {
    return firstNumber - secondNumber;
}

int Calculator::multiply() {
    return firstNumber * secondNumber;
}

double Calculator::divide() {
    return static_cast<double>(firstNumber) / secondNumber;
}