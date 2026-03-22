#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1,No2,No3;

        // Parametrised constructor with DEFAULT arguments
        Demo(int A = 11 , int B = 21, int C = 51)
        {
            No1 = A;
            No2 = B;
            No3 = C;
        }
};

int main()
{
    Demo obj1();            // 11   21  51
    Demo obj1(10);          // 10   21  51
    Demo obj1(10,20);       // 10   20  51
    Demo obj1(10,20,30);    // 10   20  30


    return 0;
}


/*
void Fun(int A = 10, int B = 20, int C = 30);   // A
void Fun(int A , int B = 20, int C = 30);       // A
void Fun(int A = 10, int B, int C = 30);        // NA
void Fun(int A = 10, int B = 20, int C);        // NA
void Fun(int A, int B = 20, int C = 30);        // A
void Fun(int A, int B, int C = 30);             // A
void Fun(int A, int B = 20, int C = 30);        // A
void Fun(int A = 10, int B, int C);             // NA
*/