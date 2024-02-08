/*
 Calculates Numbers of years
Input: enter number of days=380

output:Number of years=1.04     
*/

#include<stdio.h>
 int main() {
     int inumber1,result;

     printf("\nenter number of days");
     scanf("%d",&inumber1);

     //Division
     result=inumber1/365;

     printf("\nNumber of years%d\n",result);
     return 0;

 }