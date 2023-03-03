#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// bool isPalindrome(int x){

// }

int main() 
{
    char *buf;
    int num = 121;
    char tmp,a,b;
    int x = sprintf( buf, "%d", num);
    char *re = malloc(strlen(buf) + 1);
    // char str[strlen(buf) + 1];

    // for (size_t i = 0; i < strlen(buf); i++)
    // {
    //     a = buf[i];
    //     b = buf[strlen(buf) - i];
    //     tmp = a;
    //     a = b;
    //     b = tmp;
        
    //     re[0] = '0';
    //     re[i] = a;
    //     re[strlen(buf)] = '\0';

    //     // if (re[i] == 0)
    //     // {
    //     //     re[0] = " ";          
    //     // }
        
    // }
    if (atoi(strrev(buf)) == num)
    {
        printf("%d",num);
    }
    

    //  printf("%s",strrev(buf));

    return 0;
}