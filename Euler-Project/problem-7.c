#include <stdio.h>

// Problem #7
// By listing the first six prime 
// numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

// What is the 10 001st prime number?

int prime_numbers(int value);
int main(void)
{
    int x = 0;
    int flag = 0;
    for (int i = 1; i <= 5000000; i++)
    {
         x = prime_numbers(i);
         if (x != 0)
         {
            flag++;
            if (flag == 10001)
            {
                printf("%d\n",x);
                break;
            }
         }
         
    }
  
    return 0;
}


int prime_numbers(int value)
{

  int n, i, flag = 0;
  n = value;
  // 0 and 1 are not prime numbers
  // change flag to 1 for non-prime number
  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i)
  {
    // if n is divisible by i, then n is not prime
    // change flag to 1 for non-prime number
    if (n % i == 0)
    {
      flag = 1;
      break;
    }
  }

  // flag is 0 for prime numbers
  if (flag == 0)
    return n;
}