#include<iostream>
using namespace std;
 int power(int base, int exp) {
    if (exp == 0)
        return 1;
    else
         return base * power(base, exp - 1);
}
int main()
{
    int n,e;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Enter the exponent:";
    cin>>e;
    cout<<"Power of the number = "<<power(n,e);
    return 0;
}
