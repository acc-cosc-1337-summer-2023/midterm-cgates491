//
#include "question4.h"
#include<iostream>

bool test_config(int sold)
{
    if(sold >= 1){
    return true;
    }
    else
    {
        return false;
    }
}

int get_earned_points(int sold)
{
    int points;
    int result;
    if (sold >= 1 && sold <= 5)
    {
        points = 1;
    }
    if (sold >= 6 && sold <= 10)
    {
        points = 5;
    }
    if (sold >= 11 && sold <= 15)
    {
        points = 10;
    }
    if (sold >= 16)
    {
        points = 15;
    }
    result = points * sold;
    return result;
}