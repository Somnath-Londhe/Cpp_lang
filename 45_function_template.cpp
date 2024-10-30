#include<iostream>
using namespace std;
template <class s,class s1>
float funavg(s a,s1 b){
   float avg=(a+b)/2;
   return avg;
}
int main()
{
   int a = funavg(4,4);
     cout<<a<<endl;
     return 0;
}
