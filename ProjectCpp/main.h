//
//  main.h
//  ProjectCpp
//
//  Created by KI HOON KIM on 08.11.2021.
//

#ifndef main_h
#define main_h

#include <stdio.h>
#include <iostream>
#include <vector>
#include <array>
#include "main.h"

// 함수 객체로 구현
struct SumFunctor : public std::unary_function<int, void>
{
    SumFunctor(int &number) : sum(number) {}

    void operator()(int &number)
    {
        sum += number;
    }

private:
    int &sum;
};

int main();

bool calculate();
bool compareNumbers(long num1st, long num2nd);

#endif /* main_h */
