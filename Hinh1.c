#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double factorial(double n)
{
    if (n == 1)
        return 1;
    return (n * factorial(n - 1));
}

int h1_Bai1(int n)
{
    if (n == 0)
        return 0;
    return (n + h1_Bai1(n - 1));
}

double h1_Bai2(int n)
{
    if (n == 0)
        return 0;
    return sqrt(2 + h1_Bai2(n - 1));
}

float h1_Bai3(float n)
{
    if (n == 0)
        return 0;
    return (n / (n + 1)) + h1_Bai3(n - 1);
}

float h1_Bai4(float n)
{
    if (n == 0)
        return 1;
    return (1.0 / (2.0 * n + 1.0)) + h1_Bai4(n - 1);
}

int h1_Bai5(int n)
{
    if (n == 0)
        return 0;
    return n * (n + 1) + h1_Bai5(n - 1);
}

double h1_Bai6(double n)
{
    if (n == 0)
        return 0;
    return (1.0 / (n * (n + 1) * (n + 2))) + h1_Bai6(n - 1);
}

int h1_Bai7(int n)
{
    if (n == 0)
        return 0;
    return n * n + h1_Bai7(n - 1);
}

int h1_Bai8(int n)
{
    if (n == 0)
        return 0;
    return h1_Bai1(n) + h1_Bai8(n - 1);
}

double h1_Bai9(double n)
{
    if (n == 0)
        return 0;
    return pow(-1.0, n) * ((2*n - 1) + (2*n)) / factorial(2 * n) + h1_Bai9(n - 1);
}

double h1_Bai10(double n)
{
    if (n == 0)
        return 0;
    return (n * factorial(n + 1)) / ((n + 1) + sqrt(n + 2))  + h1_Bai10(n - 1);
}

double h1_Bai11(double n)
{
    if (n == 0)
        return 0;
    return (n + sqrt(n + n + 1)) / (n + 1 + sqrt(factorial(n + 2))) + h1_Bai11(n - 1);
}