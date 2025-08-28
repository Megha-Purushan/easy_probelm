#include<iostream>
using namespace std;
int main()
{
    int n,digit,rev=0,original;
    cout<<"Enter the number:";
    cin>>n;
    original=n;
    while(n!=0)
    {
        digit=n%10;
        rev=(rev * 10)+digit;
        n=n/10;
    }

    if(rev==original)
    {
        cout<<original<<" is a palindrome number";
    }
    else{
        cout<<original<<" is not a palindrome number";
    }
    return 0;
}
