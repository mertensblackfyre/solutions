#include <stdio.h>

// Problem #1

//  If we list all the natural numbers below 10 that are multiples of 3 or 5, 
//  we get 3, 5, 6 and 9. The sum of these multiples is 23.
//  Find the sum of all the multiples of 3 or 5 below 1000 .

int main(void)
{
    int sum = 0;
    // Loop throught the numbers
    for (int i = 1; i < 1000; i++)
    {
        // Find the multiples of 3 and 5 using modulo
        if (i % 3 == 0 || i % 5 == 0)
            // Add each multiple to each other
            sum = sum + i;        
    }

    printf("%d\n",sum);
    return sum;
}