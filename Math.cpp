//
// Created by Tianshu Wen on 2/18/20.
//
#include "Math.h"
int Math::pow(int base, int exp)
{
    int result = 1;

    for (int i = 0; i < exp; i++)
    {
        result = result * base;
    }

    return result;
}
