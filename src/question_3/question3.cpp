#include "question3.h"
#include<iostream>

bool test_config(int num)
{
    if(num >= 1 && num <= 15)
    {
    return true;
    }
    else
    {
        return false;
    }
}

int get_fib_sequence(int num)
{
    int first = 0;
    int second = 1;
    int third = 0;
    int i;
    third = first + second;

    for (i = 2; i <= num; i++)
    {
        third = first + second;
        first = second;
        second = third;
    }

    return second;
}