#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 3 sides of the triangle:";
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && a+c>b)
    {
         if(a==b && b==c && a==c)
        {
            cout<<"This triangle is equilateral";
        }
        else if(a==b || b==c || a==c)
        {
            cout<<"This triangle is Isosceles";
        }
        else
        {
            cout<<"This triangle is scalene";
        }
    }
     else
    {
        cout << "The given sides do not form a valid triangle";
    }


    return 0;
}
