#include<iostream>
using namespace std;
int main()
{
    int a1,a2,a3,sum;
    cout<<"Enter Angle 1: ";
    cin>>a1;
    cout<<"Enter Angle 2: ";
    cin>>a2;
    cout<<"Enter Angle 3: ";
    cin>>a3;
    sum=a1 + a2 + a3;
    if(sum==180 && a1>0 && a2>0 && a3>0)
       {
           cout<<"This is a triangle";
       }
        else{
            cout<<"This is not a triangle";
        }
        return 0;
}
