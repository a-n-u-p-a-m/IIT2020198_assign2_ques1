/*Program to print a number in decimal, octal and hexadecimal form*/

#include <stdio.h>
int main(void)

{
    int x;    /*Specifying data type*/
    printf("Enter a positive integer\n");
    scanf("%d",&x);   /*Taking input from user*/
    
  /*Printing in decimal, octal and hexadecimal form*/
  
    printf("x: Decimal=%hd, Octal=%ho, Hexadecimal=%hx\n",x,x,x);
    
    return 0;
}    
