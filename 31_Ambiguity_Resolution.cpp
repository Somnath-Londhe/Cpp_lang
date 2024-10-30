#include <iostream>
using namespace std;
class base1
{
public:
    void masssage()
    {

        cout << "hello" << endl;
    }
};
class base2
{
public:
    void masssage()
    {

        cout << "hii" << endl;
    }
};
class derived : public base1, public base2
{
    int a;

public:
    void masssage()
    {
        base2::masssage();
    }
};
int main()
{
    
    base1 s;
    s.masssage();
    base2 d;
    d.masssage();
    derived z;
    z.masssage();

    return 0;
}
