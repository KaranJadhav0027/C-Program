/*#################################################
Number of element do you want to store:4
input
Enter the 4 number
Element 0:7
Element 1:3
Element 2:4
Element 3:5


output
1st array element 7 3 4 5 
2nd array element 0 0 3 4
###################################################*/
#include<stdio.h>
int main(){

    int array1[100],array2[100];
    int NumberOfYourChoice;
    int i;

    printf("Number of element do you want to store:");
    scanf("%d",&NumberOfYourChoice);

    printf("\nEnter the %d number",NumberOfYourChoice);
    
    array1[i]=array2[i];
    for(i=0;i<NumberOfYourChoice;i++)
    {
    printf("\nElement %d:",i);
    scanf(" %d",&array1[i]);
      
       //  array1[i]=array2[i];
    }
   printf("\n1st array element");

        for(i=0;i<NumberOfYourChoice;i++)
        printf(" %d",array1[i]);

   printf("\n2nd array element");

        for(i=0;i<NumberOfYourChoice;i++)
        printf(" %d",array2[i]);

return 0;
}
