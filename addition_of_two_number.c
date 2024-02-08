/*
   Addition of two numbers
Input: inumber1= 22
       inumber2=24

output:Addition of two number=46       
*/

#include<stdio.h>
 int main() {
     int inumber1,inumber2,result;

     printf("\nenter first number");
     scanf("%d",&inumber1);

     printf("\nenter second number");
     scanf("%d",&inumber2);

     //Addition
     result=inumber1+inumber2;

     printf("\nAddition of two number%d",result);
     return 0;

 }