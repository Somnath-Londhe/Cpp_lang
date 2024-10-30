#include <iostream>
using namespace std;
class simple
{
    int data1;
    int data2;

public:
    simple(int a, int b)
    {
        data1 = a;
        data2 = b;
    }
    simple()
    {
        int a = 13;
        int b = 23;
        data1 = a;
        data2 = b;
        cout << data1 << endl;
        cout << data2 << endl;
    }
    void display()
    {
        cout << "the data1 is value:=" << data1 << "and data2:=" << data2 << endl;
    }
};
int main()
{
    simple s(2, 56);
    s.display();
    return 0;
}
