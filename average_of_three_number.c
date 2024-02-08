/*
  Average of three numbers
Input: inumber1=33
       inumber2=22
       inumber3=11
output:Average of three numbers is =22    
*/

#include<stdio.h>
 int main() {
     int inumber1,inumber2,inumber3,result,result1;

     printf("\nenter first number");
     scanf("%d",&inumber1);

     printf("\nenter second number");
     scanf("%d",&inumber2);

     printf("\nenter third number");
     scanf("%d",&inumber3);

     //addition of three number
     result=inumber1+inumber2+inumber3;
    
    //Average
    result1=result/3;

     printf("\nAverage of three numbers is%d",result1);
     return 0;

 }