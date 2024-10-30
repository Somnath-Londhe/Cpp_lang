#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // ?****************************************************
    const int a = 123;
    cout << "the value of a in  consents:=" << a << endl;
    //  int a=123;
    //  cout<<a;
    // *************************************
    int x = 12, y = 123, z = 1234;
    cout << "the value of x" << setw(6) << x << endl;
    cout << "the value of y" << setw(6) << y << endl;
    cout << "the value of z" << setw(6) << z << endl;
    // *************************************
    int d=2,e=3;
    int f=((12+d)*e);
    cout<<f<<endl;


    return 0;
}
