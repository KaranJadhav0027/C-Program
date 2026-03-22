#include<stdio.h>

int main()
{
    int no = 11;

    int *p = &no;

    int **q = &p;

    /*

    no      11
    p       100
    q       200

    &no     100
    &q      300
    &p      200

    *p      11
    **q     11
    *q      100
    
    */
    return 0;
}