#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s,i;
    cout<<"Enter a string:";
    cin>>s;
    reverse(s.begin(),s.end());
    cout<<"Reverse= "<<s<<endl;
    cout<<"Characters: "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] <<endl;
    }
    return 0;
}
