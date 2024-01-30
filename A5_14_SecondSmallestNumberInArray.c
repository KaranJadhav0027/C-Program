/*#################################################
input
Number of element do you want to store:5

Enter the 5 number
Element 0:5
Element 1:4
Element 2:2
Element 3:8
Element 4:1
 
 output
 Second largest number in array is:2
###################################################*/
#include<stdio.h>
int main(){

    int array[100];
    int number,i,SSmallest,smallest;

    printf("Number of element do you want to store:");
    scanf("%d",&number);

    printf("Enter the %d number\n",number);
    
    for(i=0;i<number;i++)
    {
       printf("Element %d:",i);
       scanf("%d",&array[i]);
    }
      if(array[0]<array[1])
      {
         smallest= array[0];
         SSmallest=array[1];
      }
      else
      {
         smallest= array[0];
         SSmallest=array[0];
      }
       for(i=2;i<number;i++)
      {
        if(smallest>array[i])
        {
            SSmallest=smallest;
            smallest=array[i];
        }
        else  if(SSmallest>array[i])
        {
            SSmallest=array[i];
        }
     }
    printf(" Second Smallest number in array is:%d",SSmallest);

    return 0;
}