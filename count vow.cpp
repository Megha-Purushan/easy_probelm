#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string a;
    int count=0;
    char c;
    cout<<"Enter a string : ";
    cin>>a;
    for(int i=0;i<a.length();i++)
    {
     c=tolower(a[i]);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        count++;
    }
    }
    cout<<"Number of vowels = "<<count;
    return 0;
}
