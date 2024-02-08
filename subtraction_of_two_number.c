/*
  Subtraction of two numbers
Input: inumber1= 22
       inumber2=11

output:Subtraction of two number=11     
*/

#include<stdio.h>
 int main() {
     int inumber1,inumber2,result;

     printf("\nenter first number");
     scanf("%d",&inumber1);

     printf("\nenter second number");
     scanf("%d",&inumber2);

     //subtraction
     result=inumber1-inumber2;

     printf("\nSubtraction of two number%d",result);
     return 0;

 }