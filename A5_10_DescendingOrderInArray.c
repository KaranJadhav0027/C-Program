/*################################################
Number of element do you want to store:5
Enter the 5 number
Element 0:4
Element 1:6
Element 2:1
Element 3:9
Element 4:3

Elements of the array in sorted asending order : 9 6 4 3 1
##################################################*/
#include<stdio.h>
int main(){

    int array[100];
    int i,j,a,number;

    printf("Number of element do you want to store:");
    scanf("%d",&number);

    printf("Enter the %d number\n",number);
    
    for(i=0;i<number;i++)
    {
      printf("Element %d:",i);
      scanf("%d",&array[i]);
    }
    for(i=0;i<number;++i)
    
         for(i=0;i<number;++i)
          {
           for(j=i+1;j<number;++j)
            {
            if(array[i]<array[j])
              {
                a=array[i];
                array[i]=array[j];
                array[j]=a;
              }
            }
          }
    
    printf("\nElements of the array in sorted asending order :");
    for(i=0;i<number;++i){
    printf(" %d",array[i]);
    }
return 0;
}

