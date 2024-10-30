#include <iostream>
using namespace std;
class complex;
class caluculater
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex( complex,complex);
};
class complex
{
    int a, b;
    friend int caluculater::sumrealcomplex(complex o1, complex o2);

public:
    void enter(int a1, int b2)
    {
        a = a1;
        b = b2;
    }
    void display()
    {
        cout << a << endl
             << b;
    }
};
int caluculater::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int main()
{
   complex o1,o2;
   o1.enter(1,2);
   o2.enter(2,4);
   caluculater calc;
   int res=calc.sumrealcomplex(o1,o2);
   cout<<res;

    return 0;
}
