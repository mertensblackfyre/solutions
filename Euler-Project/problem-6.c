#include <stdio.h>

// The sum of the squares of the first ten natural numbers is,

// The square of the sum of the first ten natural numbers is,

// Hence the difference between the sum of the squares of the 
//first ten natural numbers and the square of the sum is .

// Find the difference between the sum of the 
// squares of the first one hundred natural numbers and the square of the sum.

int main(void)
{
    int sqr_sum = 0;
    int sum_sqr = 0;
    int result = 0;

    for (int i = 1; i <= 100; i++)
    {
        sqr_sum = sqr_sum + (i * i);
        sum_sqr = sum_sqr + i;
    }

    result = (sum_sqr * sum_sqr) - sqr_sum;

    return 0;
}