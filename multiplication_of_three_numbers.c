/*
 Multilpication of three numbers
Input: inumber1=3
       inumber2=2
       inumber3=4
output:multiplicatin of three number=24     
*/

#include<stdio.h>
 int main() {
     int inumber1,inumber2,inumber3,result;

     printf("\nenter first number");
     scanf("%d",&inumber1);

     printf("\nenter second number");
     scanf("%d",&inumber2);

     printf("\nenter third number");
     scanf("%d",&inumber3);

     //multiplication
     result=inumber1*inumber2*inumber3;

     printf("\nmultiplicatin of three number%d\n",result);
     return 0;

 }