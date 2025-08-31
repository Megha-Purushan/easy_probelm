#include<iostream>
using namespace std;
int main()
{
    int i,n,f,a=0,b=1;
    cout<<"Enter limit:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<a<<endl;
        f=a+b;
        a=b;
        b=f;
    }

    return 0;
}
