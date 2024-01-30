/*##################################################
Number of element do you want to store:5
Enter the 5 number
Element 0:4
Element 1:9
Element 2:1
Element 3:6
Element 4:3


minimun elements are 4
maximum elements are 4
###################################################*/
#include<stdio.h>
int main(){

    int array[100];
    int NumberOfYourChoice;
    int i,n,min,max;

    printf("\nNumber of element do you want to store:");
    scanf("%d",&NumberOfYourChoice);

    printf("Enter the %d number\n",NumberOfYourChoice);
    
    for(i=0;i<NumberOfYourChoice;i++)
    {
    printf("Element %d:",i);
    scanf("%d",&array[i]);
    }
    
     min=array[0];
     max=array[0];
      for(i=1;i<n;i++)
      {
        if(array[i]<min)
        {
           min=array[i];
        }
        if(array[i]>max)
        {
          max=array[i];
        }
      }
      printf("minimun elements are %d",min);
      printf("\n maximum elements are %d",max );


return 0;
}