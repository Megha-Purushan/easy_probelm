#include<iostream>
using namespace std;
int main()
{
    int si,p,r,t;
    //si= simple interest, p=initial amount,t= time,r=rate of interest per year
    cout<<"Enter the initial amount:";
    cin>>p;
    cout<<"Enter the rate of interest per year:";
    cin>>r;
    cout<<"Enter the time duration in years:";
    cin>>t;
    si=( p * r * t)/100;
    cout<<" Simple interest = "<<si;
    return 0

}
