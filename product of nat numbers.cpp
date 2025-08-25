#include<iostream>
using namespace std;
int main()
{
  int n,pro=1;
  cout<<"Enter the limit:";
  cin>>n;
  for(int i=1;i<=n;i++){
    pro*=i;
  }
  cout<<"Product of first "<<n<<" natural number is "<<pro;
  return 0;

}

