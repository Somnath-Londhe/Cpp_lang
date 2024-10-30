#include <iostream>
using namespace std;
class Employee
{
    int id;
    int selary;

public:
    void input()
    {
        cout << "enter the employee id " << endl;
        cin >> id;
        cout << "enter the employee selary" << endl;
        cin >> selary;
    }
    void display()
    {
        cout << "the employee id is " << id << "and salary is " << selary << endl;
    }
};
int main()
{
    //  Employee som,omkar,shubham,siddu;
    Employee IBM[4];
    for (int i = 0; i < 4; i++)
    {
        IBM[i].input();
        IBM[i].display();
    }

    return 0;
}
