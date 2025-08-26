#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter a character:";
    cin>>c;
    if(c>='a' && c<='z')
    {
        cout<<c<<" is a alphabet";
    }
    else{
        cout<<c<<" is not an alphabet";
    }
    return 0;
}
