#include <iostream>
using namespace std;
class base
{
public:
    int a = 2;
    virtual void display() //imp it`s ;
    {
        cout << "the display is base class is and call:=" << a << endl;
    }
};
class derived : public base
{
public:
    int b = 1;
    void display()
    {
        cout << "the display is base class is and call:=" << a << endl;
        cout << "the display is drived class is and call:=" << b << endl;
    }
};
int main()
{
    base *base_class_pointer;
    base obj1;
    derived obj2;

    base_class_pointer = &obj2;
    base_class_pointer->display();

    return 0;
}
