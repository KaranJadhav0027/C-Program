/*#############################################################################
Enter the 1st elements in matrix
elements[0][0]=1
elements[0][1]=2
elements[1][0]=3
elements[1][1]=4

 Enter the 2nd elements in matrix
elements[0][0]=1
elements[0][1]=2
elements[1][0]=3
elements[1][1]=4 

1st is Matrix
 1 2
 3 4

2nd is Matrix
 1 2
 3 4

 Addition of two Matrix is: 
 2 4
 6 8
 ########################################################################*/
#include<stdio.h>
 int main(){

    int array1[5][5],array2[5][5];
   int i,j,Rnumber=2,Cnumber=2,addition[5][5];

/*
  // compile time code
   int i,j,Rnumber,Cnumber,addition[5][5];
    printf("Enter the number of row(less than 5)=");
    scanf(" %d",&Rnumber);
    printf("Enter the number of Coloum(less than 5)=");
    scanf(" %d",&Cnumber);

    printf("\n Enter the elements in %d by %d matrix\n",Rnumber,Cnumber);*/
   printf("\n Enter the 1st elements in matrix\n");
    for(i=0;i<Rnumber;i++)
    {
        for(j=0;j<Cnumber;j++)
        {
            printf("elements[%d][%d]=",i,j);
            scanf("%d",&array1[i][j]);
        }
    }
   printf("\n Enter the 2nd elements in matrix\n");
    for(i=0;i<Rnumber;i++)
    {
        for(j=0;j<Cnumber;j++)
        {
            printf("elements[%d][%d]=",i,j);
            scanf("%d",&array2[i][j]);
        }
    }
     printf("\n1st is Matrix\n");
    for(i=0;i<Rnumber;i++)
    {
        for(j=0;j<Cnumber;j++)
        {
            printf(" %d",array1[i][j]);
        }
        printf("\n");
     }
    printf("\n2nd is Matrix\n");
    for(i=0;i<Rnumber;i++)
    {
        for(j=0;j<Cnumber;j++)
        {
            printf(" %d",array1[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<Rnumber;i++)
      {
         for(j=0;j<Cnumber;j++)
         addition[i][j]=array1[i][j]+array2[i][j];
      }
    printf("\n Addition of two Matrix is:");
       for(i=0;i<Rnumber;i++)
         {
         for(j=0;j<Cnumber;j++)
         printf(" %d", addition[i][j]);
         if(j==Cnumber-1)
         {
            printf("\n\n");
         }
         } 
  return 0;
  }
 