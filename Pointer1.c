#include<stdio.h>

int main()
{
    int no = 11;

    int *ptr = &no;

    printf("%d\n",no);  // 11   
    printf("%d\n",&no); // 5560
    printf("%d\n",sizeof(no));  // 4
    printf("%d\n",ptr); // 5560
    printf("%d\n",&ptr);    // 5552
    printf("%d\n",sizeof(ptr)); // 8
    printf("%d\n",*ptr);   // 11 
    
    return 0;
}


// no               11
    // &no              100
    // ptr              100
    // &ptr             200
    // sizeof(no)       4
    // sizeof(ptr)      8
    // *ptr             11
    