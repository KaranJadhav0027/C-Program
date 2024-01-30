#include<stdio.h>
int main(){

    int array1[100],array2[100];
    int NumberOfYourChoice;
    int i,j;

    printf("Number of element do you want to store:");
    scanf("%d",&NumberOfYourChoice);

    printf("\nEnter the %d number",NumberOfYourChoice);
    
    for(i=0;i<=NumberOfYourChoice;i++)
    {
    printf("\nElement %d:",i);
    scanf("%d",&array1[i]);
    }
    printf("Total number of duplicate elements found in the array");
    for(i=0;i<NumberOfYourChoice;i++)
    {
        for(j=i+1;j<NumberOfYourChoice;j++)
        {
            if(array1[i]==array2[j])
            {
                printf("%d\n",array1[i]);
            }
        }
    }
return 0;

}