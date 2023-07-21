#include <stdio.h>
// Problem #3
// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

int prime_numbers(int value);

int main(void) {
  unsigned long long int num = 600851475143;
  int flag, x, largest_num = 0;

  for (int i = 1; i <= num; i++) {
    // Find the factors of num
    if (num % i == 0)
    {
      x = prime_numbers(i);
      if (x != 0)
      {
      // Find the largest prime number
      if (largest_num == 0 || largest_num < x)
        largest_num = x;
      }
    }
  }

  printf("Largest prime factor: %d\n", largest_num);
  return 0;
}

int prime_numbers(int value) {

  int n, i, flag = 0;
  n = value;
  // 0 and 1 are not prime numbers
  // change flag to 1 for non-prime number
  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) {
    // if n is divisible by i, then n is not prime
    // change flag to 1 for non-prime number
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  // flag is 0 for prime numbers
  if (flag == 0)
    return n;

  return 0;
}