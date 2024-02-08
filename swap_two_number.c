/*
  Swap two numbers without using temporary variables
Input: inumber1= 22
       inumber2=24

output:first swap number= 24
       second swap number=22      
*/

#include<stdio.h>
 int main() {
     int inumber1,inumber2;

     printf("\nenter first number");
     scanf("%d",&inumber1);

     printf("\nenter second number");
     scanf("%d",&inumber2);
 
     inumber1=inumber1+inumber2;

     inumber2=inumber1-inumber2;

     inumber1=inumber1-inumber2;

     printf("\nfirst swap number %d\n",inumber1);
     printf("\nsecond swap number %d\n",inumber2);

     return 0;
 }