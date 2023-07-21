#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Problem #4

// A palindromic number reads the same both ways. The largest palindrome made 
// from the product of two 2-digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3-digit numbers.

char *str_rev( char *str );

int main( void )
{
    char product[10000];
    char *reversed_str;
    int largest_num = 0;

    for (int i = 1; i < 1000; i++)
    {
        for (int j = 1; j < 1000; j++)
        {
            // Convert number to a string
            sprintf( product,"%d",i * j ); 
            // Reverse the string using custom function 
            reversed_str = str_rev( product );
            // Convert the string and reversed string to a number then compare them
            if (atoi( product ) == atoi( reversed_str )) 
                // Find the largest number
                if (largest_num == 0 || atoi( product ) > largest_num )
                    largest_num = atoi( product ); 
        }   
    }
    printf("%d\n",largest_num);
    
    return largest_num;
}

char *str_rev( char *str ) 
{
    char a,b,tmp;
    char *reversed_str = malloc( strlen( str ) );
    int value;

    // Loop through the string 
    for (int i = 0; i <= strlen( str ); i++)
    {
        // Swap each letter
        a = str[i];
        b = str[strlen( str ) - i];
        tmp = a;
        a = b;
        b = tmp;
        // Initialize the string variable
        reversed_str[0] = '0';
        // Copy the new letters the the variable
        reversed_str[i] = a;
        // Put the null character at the end
        reversed_str[strlen( str ) + 1] = '\0';
    }
   
     return reversed_str;   
}
