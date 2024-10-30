#include <iostream>
using namespace std;
// syntax for the inhertence for the multipul
// class derivedC:{{visibility mode base1}},{{visibility mode base2}}{
//     body of the derivead mode;
// };

class base1
{
protected:
    int base1int;

public:
    void enter(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void enter1(int a)
    {
        base2int = a;
    }
};
class derivead : public base1, public base2
{
public:
    void display()
    {
        cout << "the valueis the base 1:=" << base1int << endl;
        cout << "the valueis the base 2:=" << base2int << endl;
        cout << "This is the sum of base1 and base2:=" << base1int + base2int << endl;
    }
};
int main()
{
    derivead som;
    som.enter(1);
    som.enter1(2);
    som.display(); 
    return 0;
}
