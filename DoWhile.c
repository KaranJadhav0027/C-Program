#include<stdio.h>

int main()
{
    int iCnt = 0;

    iCnt = 1;                      // 1
    
    do
    {
        printf("Jay Ganesh…\n");   // 4
        iCnt++;                    // 3
    }while(iCnt <= 3);             // 2

    return 0;
}