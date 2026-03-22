#include<stdio.h>

int main()
{
    int no = 21;

    int *p = &no;
    
    int **q = &p;
    
    int ***x = &q;
    
    int ****y = &x;
    
    int *****z = &y;
    
    int ***a = &q;
    
    int ****b = &a;

    return 0;
}

/*

**x         100
**y         200
**q         21
*x          200
&x          400
&no         100
*p          21
&p          200
****b       21
**a         100
x           300
&z          600
*****z      21
sizeof(a)   8
sizeof(p)   8
sizeof(*p)  4
***x        21
&a          700
&(***a)     100
****y       21
&(**y)      300



















*/


