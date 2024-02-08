/*
   Swap two numbers by using temporary variables
Input: inumber1= 22
       inumber2=24

output:first swap number= 24
       second swap number=22      
*/

#include<stdio.h>
 int main() {
     int inumber1,inumber2,inumber3,temp;

     printf("\nenter first number");
     scanf("%d",&inumber1);

     printf("\nenter second number");
     scanf("%d",&inumber2);

       temp=inumber1;

       inumber1=inumber2;

       inumber2=temp;

      printf("first swap number%d\n",inumber1);
      printf("second swap number%d",inumber2);
      return 0;

 } 
