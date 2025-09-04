#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string s;
    int o;
    cout<<"Enter a string:";
    cin>>s;
    cout << "Select options:\n1. To Uppercase\n2. To Lowercase "<<endl;
    cin >> o;;
    switch(o)
    {
    case 1:
         for(int i = 0;i< s.length();i++) {
                s[i]= toupper(s[i]);
            }
            cout << "Uppercase: " << s;
            break;

    case 2:
        for (int i=0;i<s.length();i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<< "Lowercase: "<<s;
            break;
    default:
        cout<<"Invalid";

    }
    return 0;
}
