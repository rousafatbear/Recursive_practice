#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int h3_Bai7_1 (int n)
{
    if (n == 0) return 1;
    if (n == 1) return 0;
    if (n == 2) return -1;
    return 2*h3_Bai7_1(n - 1) - 3*h3_Bai7_1(n-2) - h3_Bai7_1(n-3);
}

int h3_Bai7_2 (int n)
{
    if (n == 1 || n == 2 || n == 3)
        return n;
    return 2*h3_Bai7_2(n-1) + h3_Bai7_2(n-2) - 3*h3_Bai7_2(n-3);
}

int h3_Bai10(int *arr, int left, int right, int x)
{
    if (left < right)
    {
        int middle = left + ((right - left) / 2);
        if (x == arr[middle]) return 1;
        else if (x > arr[middle])
            return h3_Bai10(arr, middle + 1, right, x);
        else 
            return h3_Bai10(arr, left, middle - 1, x);
    }
    return 0;
}

int h3_Bai11(int n)
{
    if (n <= 1)
        return 1;
    else
        return h3_Bai11(n - 1) + h3_Bai11(n - 2);
}