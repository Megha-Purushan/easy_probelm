#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    a=a + b;
    b=a - b;
    a=a - b;
    cout<<"Numbers after swapping, value of first number is  "<<a<<" and value of second number is "<<b;
    return 0;
}
