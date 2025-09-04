#include<iostream>
using namespace std;
int main()
{
   int a[5]={1,6,3,9,2};
    int n = 5;
   int temp,i;
   for(i=0;i<n/2;i++)
   {
       temp=a[i];
       a[i]=a[n-i-1];
       a[n-i-1]=temp;
   }
   cout<<"Reversed array:";
   for(i=0;i<n;i++)
   {
       cout<<a[i];
   }
   return 0;
}

