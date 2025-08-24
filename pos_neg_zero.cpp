#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(n<0){
        cout<<"Number "<<n<< " is a negative number ";
    }
    else if(n>0)
    {
        cout<<"Number "<<n<<" is a positive number ";

    }
    else
    {
        cout<<"It is a zero "<<n;
    }
    return 0;
}
