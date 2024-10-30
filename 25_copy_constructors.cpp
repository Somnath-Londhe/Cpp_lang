#include <iostream>
using namespace std;
class number
{
    int a;

public:
    number(int num)
    {
        a = num;
    }
    // number(number &obj)
    // {
    //     cout<<"copy the construnces!!!!!!!!!!!!!!!!"<<endl;
    //     a = obj.a;
    // }
    void display()
    {
        cout << "the value of a:-" << a << endl;
    }
};
int main()
{
    
    number x(12);
    x.display();
    number y(13);
    y.display();
    number z(14);
    z.display();
    number z1(y);
    z1.display();

    // z2=z;//not use and call to constroucter
   number z2=z;//use to  constroucter
   z2.display();
    return 0;
}
