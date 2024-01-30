/*################################################
  Input:
  Number of element do you want to store:5

      Enter the 5 number  
        Element 0:7
        Element 1:4
        Element 2:5
        Element 3:6
        Element 4:5
        
  output: element in array in array 7 4 5 6 5 
             
################################################*/
#include<stdio.h>
int main(){

    int number[100];
    int NumberOfYourChoice;
    int i;

    printf("Number of element do you want to store:");
    scanf("%d",&NumberOfYourChoice);

    printf("Enter the %d number",NumberOfYourChoice);
    
    for(i=0;i<NumberOfYourChoice;i++)
    {
    printf("\nElement %d:",i);
    scanf("%d",&number[i]);
    }
      printf("element in array in array");

    for(i=0;i<NumberOfYourChoice;i++)
     printf(" %d",number[i]);
return 0;
}