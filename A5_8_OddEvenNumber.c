/*##################################################
Number of element do you want to store:6

Enter the 6 number
Element 0:9
Element 1:2
Element 2:4
Element 3:8
Element 4:6
Element 5:1

Even elements in array2 4 8 6
Odd elements in array1 9
####################################################*/
#include<stdio.h>
int main(){

    int array[50];
    int number,i;

    printf("Number of element do you want to store:");
    scanf("%d",&number); 

    printf("\nEnter the %d number",number);
    for(i=0;i<number;i++)
    {
        printf("Element %d:",i);
        scanf("%d",&array[i]);
    }
    printf("Even elements in array");
    for(i=0;i<number;i++)
    {
      if(array[i]%2==0)
        printf("%d ",array[i]);
    }
     printf("\nOdd elements in array");
    for(i=0;i<number;i++)
    {
        if(array[i]%2 !=0)
        printf("%d ",array[i]);
    }
    return 0;
}