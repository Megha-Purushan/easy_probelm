#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,e;
    double p;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Enter the exponent:";
    cin>>e;
    p= pow(n,e);
    cout<<"Power of the number = "<<p;
    return 0;
}
