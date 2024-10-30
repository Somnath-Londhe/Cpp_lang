#include <iostream>
using namespace std;
class shop
{
    int itemid;
    static int counter;

public:
    void enter()
    {
        cout << "enter your itemid " << counter + 1 << endl;
        cin >> itemid;
        counter++;
    }
    void display()
    {
        cout << "the shop itemid is:=" << itemid<<endl;
        cout << "the shop count is:=" << counter<<endl;
    }
};
int  shop::counter=100;
int main()
{
    shop smart,s;

    smart.enter();
    smart.display();

    s.enter();
    s.display();
    return 0;
}
