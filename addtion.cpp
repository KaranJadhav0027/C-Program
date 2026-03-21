#include<iostream>
using namespace std;

class Demo
{
    public:
       int A=10;
       int B=20,sum=0; 

        void Fun()
        {
           // cout<<"Inside Fun\n";
           sum=A+B ;
           

           
        }

};

int main()

    Demo obj;
    
   // cout<<sizeof(obj)<<"\n";    // 8
int Sum;
    //obj.A = 11;
    //obj.B = 21;
cout<<"addition "<<Sum;
   // obj.Fun();                  // Inside Fun
   
   // cout<<obj.A<<"\n";          // 11
    //cout<<obj.B<<"\n";          // 21
    
    return 0;
}