#include<iostream>
using namespace std;
int main()
{
    int m,c;
    cout<<"Enter the marks:";
    cin>>m;
    if(m>=50){
        cout<<"Grade A";
    }
    else if(m>=40)
    {
        cout<<"Grade B";
    }
     else if(m>=30)
    {
        cout<<"Grade C";
    }
     else if(m>=20)
    {
        cout<<"Grade D";
    }
     else
    {
        cout<<"Grade E";
    }
    return 0;
}
