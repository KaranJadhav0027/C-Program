/*
  Area of rectangle
input:
      width=5
      height=4

output:
       Area of rectangle is= 20

*/

#include<stdio.h>
int main(){

     float width,height,area;

     printf("\nenter width of rectangle");
     scanf("%f",&width);

     printf("\nenter height of rectangle");
     scanf("%f",&height);
     
     //area of rectangle
     area=width*height;

     printf("\nArea of rectangle is=%f\n" ,area);
     return 0;
     
}