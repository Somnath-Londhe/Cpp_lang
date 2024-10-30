#include <iostream>
using namespace std;
class complax
{
    int a, b;

public:
    void setdata(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    friend complax sumcomplax(complax o1, complax o2);
    void printfunction()
    {
        cout << "the value is a  " << a << "+" << b << "i" << endl;
    }
};
complax sumcomplax(complax o1, complax o2)
{
    complax g;
    g.setdata((o1.a + o2.a), (o1.a + o2.b));
    return g;
}
int main()
{
    complax c1, c2, sum;
    c1.setdata(12, 22);
    c1.printfunction();

    c2.setdata(12, 22);
    c2.printfunction();

    sum = sumcomplax(c1, c2);
    sum.printfunction();

    return 0;
}
