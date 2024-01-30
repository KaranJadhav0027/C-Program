/*#############################################
input
Number of element do you want to store:5

Enter the 5 number

Element 0:5
Element 1:3
Element 2:8
Element 3:9
Element 4:1
output
 Second largest number in array is:8
###############################################*/
#include<stdio.h>
int main(){

    int array[100];
    int number,i,Slargest,largest;

    printf("Number of element do you want to store:");
    scanf("%d",&number);

    printf("Enter the %d number\n",number);
    
    for(i=0;i<number;i++)
    {
       printf("Element %d:",i);
       scanf("%d",&array[i]);
    }
      if(array[0]>array[1])
      {
         largest= array[0];
         Slargest=array[1];
      }
      else
      {
         largest= array[0];
         Slargest=array[0];
      }
       for(i=2;i<number;i++)
      {
        if(largest<array[i])
        {
            Slargest=largest;
            largest=array[i];
        }
        else  if(Slargest<array[i])
        {
            Slargest=array[i];
        }
     }
    printf(" Second largest number in array is:%d",Slargest);

    return 0;
}
     


