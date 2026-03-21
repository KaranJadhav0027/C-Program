#include<stdio.h>

int main()
{
    int Arr[3][4] = {10,20,30,40,50,60,70,80,90,100,110,120};

    printf("%d\n",sizeof(Arr));   // 48

    printf("%d\n",Arr[1][0]);   // 50
    printf("%d\n",Arr[2][1]);   // 100
    printf("%d\n",Arr[1][1]);   // 60
    printf("%d\n",Arr[0][2]);   // 30
    printf("%d\n",Arr[1][3]);   // 80
    printf("%d\n",Arr[2][3]);   // 120
    printf("%d\n",Arr[0][3]);   // 40
    
    return 0;
}