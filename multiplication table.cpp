#include<iostream>
using namespace std;
int main()
{
    int n,i,l,m;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"Enter lines to be multiplied:";
    cin>>l;
    for(i=1;i<=l;i++)
    {
     m=(n*i);
     cout<<n<<" * "<<i<<" = "<<m<<endl;
    }

    return 0;
}
