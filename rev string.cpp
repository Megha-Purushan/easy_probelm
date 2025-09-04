#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string:";
    cin>>s;
    reverse(s.begin(),s.end());
    cout<<"Reverse= "<<s;
    return 0;
}
