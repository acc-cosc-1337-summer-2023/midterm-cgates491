#include "question1.h"
#include<iostream>
#include<string>

using std::string;

bool test_config(int num)
{
    if(num <= 10 && num >= 1){
    return true;
    }
    else{
        return false;
    }
}

string get_factorial_sequence(int num)
{
    std::string result = std::to_string( num == 0 ? 0 : 1 );
    int factorial = 1;

    for (int i = 1; i++ < num;)
    {
        result += 'x' + std::to_string(i);
        factorial *= i;
    }

    return result + "=" + std::to_string(factorial);
}