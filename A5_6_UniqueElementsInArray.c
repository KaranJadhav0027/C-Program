#include<stdio.h>
int main(){

    int array[100];
    int NumberOfYourChoice;
    int i,j;

    printf("Number of element do you want to store:");
    scanf("%d",&NumberOfYourChoice);

    printf("\nEnter the %d number",NumberOfYourChoice);
    
    for(i=0;i<NumberOfYourChoice;i++)
    {
    printf("\nElement %d:",i);
    scanf("%d",&array[i]);
    }
     for(i=0;i<NumberOfYourChoice;i++)
      for(j=0;j<i;j++)
      {
        if(array[i]==array[j])
        break;
      }
      if(i==j)
      {
     printf(" %d",array[i]);
      }

return 0;
     
}