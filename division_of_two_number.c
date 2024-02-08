/*
   Division of two numbers
Input: inumber1=100
       inumber2=25

output:division of two number=4      
*/

#include<stdio.h>
 int main() {
     int inumber1,inumber2,result;

     printf("\nenter first number");
     scanf("%d",&inumber1);

     printf("\nenter second number");
     scanf("%d",&inumber2);

     //Division
     result=inumber1/inumber2;

     printf("\ndivision of two number%d\n",result);
     return 0;

 }