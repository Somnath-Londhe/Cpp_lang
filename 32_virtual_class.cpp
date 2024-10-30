#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void set_data(int a)
    {
        roll_number = a;
    }
    void print_number()
    {
        cout << "this is the student roll_number:-" << roll_number << endl;
    }
};
class test : virtual public student
{
protected:
    float math, physics;

public:
    void mark(float m1, float m2)
    {
        math = m1;
        physics = m2;
    }
    void mark_display()
    {
        cout << "this is the mark of math:=" << math << endl
             << "and physics:=" << physics << endl;
    }
};
class sporte : virtual public student
{
protected:
    int scours;

public:
    void marks(int s)
    {
        scours = s;
    }
    void mark_sporte()
    {
        cout << "this is the mark of the sporte:=" << scours << endl;
    }
};
class result : public test, public sporte
{
private:
    int total;

public:
    void display()
    {
        total = math + physics + scours;
        print_number();
        mark_display();
        mark_sporte();
        cout<<"your total number is the :"<<total<<endl;
    }
};

int main()
{
    result som;
    som.set_data(1);
    som.mark(99.22,77.43);
    som.marks(99);
    som.display();
    return 0;
}
