#include<iostream>
using namespace std;
int main()
{
   int a[5]={1,6,3,9,2};
   int max=a[0];
   for(int i=0;i<5;i++)
   {
   if(a[i]>max)
   {
       max=a[i];
   }
   }
   cout<<max;
   return 0;
}
