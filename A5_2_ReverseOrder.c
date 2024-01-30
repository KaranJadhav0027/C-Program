/*################################################
Number of element do you want to store:5
input
Enter the 4 number
Element 0:7
Element 1:3
Element 2:4
Element 3:5
Element 4:6

output
element in array in array 6 5 4 3 7
##################################################*/
#include<stdio.h>
int main(){

    int number[100];
    int NumberOfYourChoice;
    int i;

    printf("Number of element do you want to store:");
    scanf("%d",&NumberOfYourChoice);

    printf("\nEnter the %d number",NumberOfYourChoice);
    
    for(i=0;i<NumberOfYourChoice;i++)
    {
    printf("\nElement %d:",i);
    scanf("%d",&number[i]);
    }
      printf("element in array in array");

    for(i=NumberOfYourChoice-1;i>=0;i--)
     printf(" %d",number[i]);
return 0;
}