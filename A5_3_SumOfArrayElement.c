/*################################################
  Number of element do you want to store:4

Enter the 4 number
Element 0:4
Element 1:1
Element 2:2
Element 3:3

element in array in array 1 2 3 4
Addition of Array elements 10
             
################################################*/
#include<stdio.h>
int main(){

    int number[100];
    int NumberOfYourChoice;
    int i,sum=0;

    printf("Number of element do you want to store:");
    scanf("%d",&NumberOfYourChoice);

    printf("\nEnter the %d number",NumberOfYourChoice);
    
    for(i=0;i<NumberOfYourChoice;i++)
    {
    printf("\nElement %d:",i);
    scanf("%d",&number[i]);
     
      sum +=number[i];

    }
      printf("element in array in array");

    for(i=0;i<NumberOfYourChoice;i++)
     printf(" %d",number[i]);
     printf("\nAddition of Array elements %d",sum);
return 0;
}