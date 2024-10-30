#include <iostream>
using namespace std;
class Employee
{
public:
    int emp_id;
    int salery;
    string name;
    Employee(int a, int b, string c)
    {
        emp_id = a;
        cout << emp_id<<endl;
        salery = b;
        cout << salery<<endl;

        name = c;
        cout << name<<endl;
    }
};

int main()
{
    Employee(1, 2343442, "somnath");

    return 0;
}
