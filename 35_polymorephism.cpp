#include <iostream>
using namespace std;
class base
{
    public:
    int a;
    void dispaly(){

    cout<<"this is the class base :"<<a<<endl;
    }
};
class derived : public base
{
    public:
    int b;
    void dispaly(){
    // cout<<"this is the class base"<<a<<endl;
    cout<<"this is the class derived"<<b<<endl;

    }
};
int main()
{
    base *class_pointer;
    base obj1;
    derived obj2;
    class_pointer = &obj1;
    class_pointer->a=13;
    class_pointer->dispaly();
    class_pointer->a=13435;
    class_pointer->dispaly();
    // class_pointer->b=13;    ******not a run Error display
    // class_pointer->dispaly();--
      derived *class_derived;
      class_derived=&obj2;
      class_derived->b=24;
      class_derived->dispaly();


    return 0;
}
