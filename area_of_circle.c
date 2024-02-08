/*
   Area of Cricle
 input: radius=5

 output: Area of circle=78.50
*/
#include<stdio.h>
int main(){

    float radius,area;

    printf("\nenter radius ");
    scanf("%f",&radius);

    //area
    area=3.14*radius*radius;

    printf("Area of circle: %f\n",area);
    return 0;
}