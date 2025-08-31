#include<iostream>
#include<cmath>
using namespace std;
int  main()
{
    int i,n,r;
    bool P= true;
    cout<<"Enter a number:";
    cin>>n;
    r=sqrt(n);
    for(i=2;i<=r;i++)
    {
        if(n%i==0)
        {
            P = false;
            break;
        }
    }
    if(P==true)
    {
          cout<<n<<" is  a prime number";
    }
    else
        {
            cout<<n<<" is not a prime number";
        }
  return 0;
}
