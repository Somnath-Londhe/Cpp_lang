#include <iostream>
using namespace std;
class stutent
{
    int roll_number;

public:
    void setdata(int);
    void get_roll_number();
};
void stutent::setdata(int r)
{
    roll_number = r;
}
void stutent::get_roll_number()
{
    cout << "the roll number is :=" << roll_number << endl;
}
class Exam : public stutent
{
protected:
    float physice;
    float math;

public:
    void set_mark(float, float);
    void get_mark();
};
void Exam::set_mark(float p, float m)
{
    physice = p;
    math = m;
}
void Exam::get_mark()
{
    cout << "phyhsice:=" << physice << endl;
    cout << "math:=" << math << endl;
}
class result : public Exam
{
    float per;

public:
    void display_result()
    {
        get_roll_number();
        get_mark();
        cout << "the per is the total mark:=" << (physice + math) / 2;
    }
};

int main()
{
    result somnath;
    somnath.setdata(1);
    somnath.set_mark(90.0, 90.0);
    somnath.display_result();
    return 0;
}
