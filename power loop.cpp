#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,e;
    double p=1;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Enter the exponent:";
    cin>>e;
    for(int i=1;i<=e;i++)
    {
        p=p*n;
    }
    cout<<"Power of the number = "<<p;
    return 0;
}

