#include <iostream>
using namespace std;
class y;
class x
{
    int data;

public:
    void input(int value)
    {
        data = value;
    }
    friend void sum(x, y);
};
class y
{
    friend class sum;
    int num;

public:
    void input(int value)
    {
        num = value;
    }
    friend void sum(x, y);
};
void sum(x o1, y o2)
{
    cout << "sum of degikt of number " << o1.data + o2.num;
}
int main()
{
    x a1;
    y a2;
    a1.input(2);
    a2.input(5);
    sum(a1, a2);

    return 0;
}
