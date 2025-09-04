#include<iostream>
using namespace std;
int main()
{
   int a[5]={1,6,3,9,2};
   int sum=0;
   int avg;
   for(int i=0;i<5;i++)
   {
      sum=sum+a[i];
   }
   avg=(sum/5);
   cout<<avg;
   return 0;
}
