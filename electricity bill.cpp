#include<iostream>
using namespace std;
int main()
{
    int u;
    double r;
    cout<<"Enter the units of electricity consumed:";
    cin>>u;
    if(u<=100)
    {
        r=(u*1.5);
        cout<<"rate = "<<r;
    }
    else if(u<=200)
    {
        r=(100*1.5 + ((u-100)*2.5));
        cout<<"rate = "<<r;
    }
    else if(u<=300)
    {
        r=(100*1.5) + (100*2.5) + ((u-200)*4);
        cout<<"rate = "<<r;
    }
    else if(u<=400)
    {
        r=(100*1.5) + (100*2.5) + (100*4) + ((u-300)*6);
        cout<<"rate = "<<r;
    }
     else {
        r = (100 * 1.5) + (100 * 2.5) + (100 * 4) + (100 * 6) + ((u - 400) * 7);
         cout<<"rate = "<<r;
    }
    return 0;

}
