#include<stdio.h>

struct Demo
{
    int no;
    float f;
};

int main()
{
    struct Demo Arr[3];

    Arr[0].no = 11;
    Arr[0].f = 10.1;

    Arr[1].no = 21;
    Arr[1].f = 20.1;

    Arr[2].no = 51;
    Arr[2].f = 30.1;
    
    return 0;
}