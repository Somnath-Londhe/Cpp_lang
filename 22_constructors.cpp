#include <iostream>
using namespace std;
class Employee
{
public:
    int emp_id;
    int salery;
    string name;
    Employee()
    {
        int emp_id;
        cout << "enter the emp_id of employee"<<endl;
        cin >> emp_id;
        cout << "this  is the emp_id  of employee:-" << emp_id << endl;

        int salery;
        cout << "enter the salery of employee"<<endl;
        cin >> salery;
        cout << "this  is the salery of employee:-" << salery << endl;

        string name;
        cout << "enter the name of employee"<<endl;
        cin >> name;
        cout << "this  is the name of employee:-" << name << endl;
    }
};

int main()
{
    Employee();

    return 0;
}
