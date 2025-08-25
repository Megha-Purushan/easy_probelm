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
        cout<<b<<" is smaller than "<<a;
    }
    else
    {
        cout<<a<<" is smaller than "<<b;
    }
    return 0;
}

