#include<iostream>
using namespace std;
int main()
{
     int a,b;
     int c=23;
     cout<<"enter the value is a"<<endl;
     cin>>a;
     cout<<"enter the value is b";
     cin>>b;
     c=a+b;
     cout<<"the sum is "<<c;
     // reference the varible
     int x=131;
     cout<<x;
     int & s = x;
     cout<<s;

     // typecasting 
     int f=12;
     float w= 12.31;
     cout<<f+w;//24.31
     cout<<f+(int)w;//24

     return 0;
}
