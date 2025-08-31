#include<iostream>
using namespace std;
int  main()
{
    int f=1,i,n;
    cout<<"Enter the number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    cout<<"Factorial of the number is "<<f;
    return 0;
}
