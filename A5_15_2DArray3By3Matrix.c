/*#################################################
Enter the number of row=3
Enter the number of Coloum=3

 Enter the elements in 3 by 3 matrix
elements[0][0]=2
elements[0][1]=3
elements[0][2]=4
elements[1][0]=4 
elements[1][1]=5
elements[1][2]=6
elements[2][0]=7
elements[2][1]=7 
elements[2][2]=8

The Matrix
 2 3 4
 4 5 6
 7 7 8
###################################################*/

#include<stdio.h>
 int main(){

    int array[20][20],i,j;
    int Rnumber=3,Cnumber=3;

/*
  // compile time code
   int i,j,Rnumber,Cnumber;
    printf("Enter the number of row=");
    scanf(" %d",&Rnumber);
    printf("Enter the number of Coloum=");
    scanf(" %d",&Cnumber);

    printf("\n Enter the elements in %d by %d matrix\n",Rnumber,Cnumber);*/
   printf("\n Enter the elements in matrix\n");
    for(i=0;i<Rnumber;i++)
    {
        for(j=0;j<Cnumber;j++)
        {
            printf("elements[%d][%d]=",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("\nThe Matrix\n");
    for(i=0;i<Rnumber;i++)
    {
        for(j=0;j<Cnumber;j++)
        {
            printf(" %d",array[i][j]);
        }
        printf("\n");
    }
  return 0;
 }
