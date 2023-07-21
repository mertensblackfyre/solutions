#include <stdio.h>

// Problem #5
// 2520 is the smallest number that can be divided
//  by each of the numbers from 1 to 10 without any remainder.

// What is the smallest positive number that is evenly 
// divisible by all of the numbers from 1 to 20

int GCD(int a,int b);
int main()
{
    int result = 1;

    for (int i = 1; i <= 20; i++)
    {
        int x = GCD(i,result);
        result = (result / x) * i;            
    }
  
    return 0;
    
}

int GCD(int a, int b)
{
    int value,largest_num = 0;

    if (a > b || a == b)
        value = a;
    if (b > a)
        value = b;

    for (int i = 1; i <= value; i++)
    {
        if (a % i == 0 && b % i == 0 )
            if (largest_num == 0 || largest_num < i)
                largest_num = i;
    }
    return largest_num;
}

