#include<stdio.h>

int main()
{
    int Arr[5] = {10,20,30,40,50};

    int *p = &(Arr[1]);
    int *q = &(Arr[3]);

    printf("%d\n",Arr);     // 100
    printf("%d\n",&Arr);     // 100
    printf("%d\n",&(Arr[0]));     // 100

    printf("%d\n",p);       // 104
    printf("%d\n",q);       // 112
    printf("%d\n",*p);      // 20
    printf("%d\n",*q);      // 40

    return 0;
}