#include<iostream>
using namespace std;
int main()
{
   int a,b,c;
   cout<<"Enter number 1:";
   cin>>a;
   cout<<"Enter number 2:";
   cin>>b;
   cout<<"Enter number 3:";
   cin>>c;
   if(a>=b && a>=c)
   {
       cout<<a<<" is greatest";
   }
   else if(b>=a && b>=c)
   {
       cout<<b<<" is greatest";
   }
   else{
    cout<<c<<" is greatest";


   }
    return 0;
}

