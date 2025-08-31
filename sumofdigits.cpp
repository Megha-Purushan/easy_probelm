#include<iostream>
using namespace std;
int main()
{
    int n,a,s=0;
    cout<<"Enter a number:";
    cin>>n;
    while(n!=0)
    {
        a=n%10;
        s+=a;
        n=n/10;
    }
    cout<<"Sum of digits= "<<hs;
    return 0;
}
