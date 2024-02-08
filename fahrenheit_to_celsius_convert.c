/*
   Fahrenheit to celsius converter
 Input: enter temperature :106

 Output: temperature in celsius:41.11
*/
 
 #include<stdio.h>
 int main() {
    double lftemp, celsius;

    printf("\nEnter a number");
    scanf("%lf",&lftemp);

    celsius = (lftemp - 32) / 1.8;

    printf("\n temperature in celsius %lf",celsius);
    return 0;
 }