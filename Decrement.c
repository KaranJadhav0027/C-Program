#include<stdio.h>

int main()
{
    int A = 10, B = 10;
    int No1 = 0, No2 = 0;

    No1 = A--;      // Post decrement (First intialise then decrement)
    printf("Value of No1 : %d\n",No1);  // 10
    printf("Value of A : %d\n",A);      // 9

    No2 = --B;      // Pre decrement (First decrement then initialise)
    printf("Value of No2 : %d\n",No2);  // 9
    printf("Value of B : %d\n",B);      // 9
    
    return 0;
}
