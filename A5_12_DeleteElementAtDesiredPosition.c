/*#############################################
Number of element do you want to store:5
Enter the 5 number
Element 0:3
Element 1:4
Element 2:5
Element 3:5
Element 4:6
Enter the position you where you delete2

the new array0
##############################################*/
#include<stdio.h>
 int main()
 {
    int array[100]={0};
    int i,pos,number;
     
     printf("Number of element do you want to store:");
    scanf("%d",&number);

    printf("Enter the %d number\n",number);
    
      for(i=0;i<number;i++)
    {
      printf("Element %d:",i);
      scanf("%d",&array[i]);
    }
    printf("Enter the position you where you delete");
    scanf("%d",&pos);

     for(i=pos-1;i<number-1;i++)
     {
        array[i]=array[i+1];
     }
    {
      printf("\nthe new array%d",array[i+1]);
    }
 }