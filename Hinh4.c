#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int X(n);
int Y(n);

int h4_Bai12 (int n, int x, int x2)
{
    if (n == 0 || n == 1) return -1;
    if ((x + x2) >= n)
        return x;
    return h4_Bai12(n, x + x2, x);
}

int X(n)
{
    if (n == 0) return 1;
    return X(n - 1) + Y(n - 1);
}

int Y(n)
{
    if (n == 0) return 0;
    return 3 * X(n - 1) + 2 * Y(n - 1);
}

int h4_Bai14_1 (int n)
{
    int temp2 = 1;
    static int sum = 1;
    for (int i = 2; i <= n; i++)
    {
        temp2 = 1;
        for (int j = 2; j < i; j++)
            temp2 += j * temp2;
        sum = i * temp2;
    }
    return sum;
}

int h4_Bai14_2 (int n)
{
    int sum = 0;
    if (n == 1)
        return 1;
    for (int i = 1; i < n; i++)
        sum += h4_Bai14_2(i);
    return n * sum;
}

int h4_Bai15(int n)
{
    if (n == 1 || n == 2 || n == 3)
        return n;
    else if (n >= 4)
        return h4_Bai15(n - 1) + 2 * h4_Bai15(n - 2) + 3 * h4_Bai15(n - 3);
}

int h4_Bai16(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else if (n >= 3)
        return h4_Bai16(n - 1) + (n - 1) * h4_Bai16(n - 2);
}