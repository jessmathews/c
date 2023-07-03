#include <stdio.h>    
#include <stdlib.h>  


int main() 
{  
int a[8],n,i; 
printf("Enter a decimal:");    
scanf("%d",&n);    
for(i=0;n>0;i++)    
{    
a[i]=n%2;    
n=n/2;    
}    
printf("Binary of %d is:",n);    
for(i=i-1;i>=0;i--)    
{    
printf("%d",a[i]);    
}    
return 0;  
}  
