#include<iostream>
using namespace std;
int main()
{
    int c;
    cout<<"Enter a digit:";
    cin>>c;

    if(c >= 0 && c <= 9)

    {
        cout<<c<<" is a digit";
    }
    else{
        cout<<c<<" is not an digit";
    }
    return 0;
}

