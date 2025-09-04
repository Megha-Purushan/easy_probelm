#include<iostream>
using namespace std;
/*int main()
{
    //right angled triangle
    int n,i,j;
    cout<<"Enter limit:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}*/
//pyramid
int main()
{
    int n,i,j,s;
    cout<<"Enter limit:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
        {
            cout<<" ";
        }
            for(j=1;j<=i;j++)
            {
                cout<<"* ";
            }
        cout<<endl;
    }
    return 0;
}

