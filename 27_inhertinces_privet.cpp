/*
derived class (child) - the class that inherits from another class
base class (parent) - the class being inherited from

*/
#include <iostream>
using namespace std;
class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base::setdata()
{
    data1 = 10;
    data2 = 20;
}
int base::getdata1()
{
    return data1;//data 1 in not a data acess to diratly
}
int base::getdata2()
{
    return data2;
}
class derived : private base
{
    int data3;

public:
    void process();
    void display();
};
void derived::process()
{
      setdata();
    data3 = getdata1() * data2;//*************
}
void derived::display()
{
    cout << "dispaly the data1 value:=" << getdata1()<<endl;//*****************
    cout << "dispaly the data1 value:=" << getdata2()<<endl;
    cout << "dispaly the data1 value:=" << data3<<endl;
}
int main()
{
    derived in;
    in.process();
    in.display();

    return 0;
}
