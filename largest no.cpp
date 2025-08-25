#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter number 1: ";
    cin>>a;
    cout<<"Enter number 2: ";
    cin>>b;
    if(a>b){
        cout<<a<<" is greater than "<<b;
    }
    else
    {
        cout<<b<<" is greater than "<<a;
    }
    return 0;
}
