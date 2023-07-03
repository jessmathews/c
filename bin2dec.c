#include <stdio.h>  
#include <stdlib.h>  
void main()  
{  
      
    int num, bin, dec = 0, base = 1, rem;  
    printf("Enter a binary number:");  
    scanf(" %d", &num);
    bin = num;
    while ( num > 0)  
    {  
        rem = num % 10;   
        dec= dec + rem * base;  
        num = num / 10;
        base = base * 2;  
    }  

    printf("The decimal equivalent of %d is %d \t",bin,dec);
  
}  
