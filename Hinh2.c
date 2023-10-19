#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int h2_Bai2 (int m, int n)
{
    if (n == 0)
        return 1;
    return m * h2_Bai2(m, n - 1);
}

int UCLN (int a, int b)
{
    if (a > b) return UCLN(b, a- b);
    else if (a < b) return UCLN(a, b - a);
}

int h2_Bai4(int a, int n, int r)
{
    if (n == 1)
        return a;
    else if (n > 1)
        return (h2_Bai4(a, n - 1, r) + r);
}

int h2_Bai5(int a, int n, int q)
{
    if (n == 1)
        return a;
    else if (n > 1)
        return (q * h2_Bai5(a, n - 1, q));
}

int h2_Bai6(int n)
{
    if (n < 6)
        return n;
    else
        return (h2_Bai6(n - 5) + h2_Bai6(n - 4) + h2_Bai6(n - 3) + h2_Bai6(n - 2) + h2_Bai6(n - 1));
}