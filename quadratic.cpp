#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,r1,r2,r,d;
    cout<<"Enter coefficients :";
    cin>>a>>b>>c;
    d=(b * b -(4 * a * c));
    if(d>0)
    {
        r1=(-b + sqrt(d))/(2 * a);
        r2=(-b - sqrt(d))/(2 * a);
        cout<<"Root 1= "<<r1<<endl;
        cout<<"Root 2= "<<r2;
    }
    else if(d==0)
    {
        r1=-b/(2*a);
        cout<<"Root = "<<r1;
    }
    else{
        cout<<"Roots are complex and imaginary";
    }
    return 0;
}
