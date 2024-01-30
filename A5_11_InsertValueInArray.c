#include<stdio.h>
 int main()
 {
    int array[100]={0};
    int i,x,pos,number,a,j;
     
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
            if(array[i]>array[j])
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
      x=50;
      pos=2;

      number++;

      for(i=number-1;i>=pos;i--)
      array[i]=array[i-1];

      array[pos-1]=x;
        
        for(i=0;i<number;i++)
        printf("%d ",array[i]);
        printf("\n");
        return 0;
 }