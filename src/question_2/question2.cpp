#include<string>
#include "question2.h"
#include<iostream>

using std::string;

bool test_config(std::string num)
{
    std::string len = num;
    if(len.size() == 8)
    {
    return true;
    }
    else{
        return false;
    }
}

int binary_to_decimal(std::string num)
{
    std::string n = num;
    int value = 0;

    int base = 1;

    int len = n.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (n[i] == '1')
            value += base;
            base = base * 2;
        
    }
    return value;
}