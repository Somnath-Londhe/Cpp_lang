#include <iostream>
using namespace std;
class student
{
private:
    int roll_no;
    char name[12];
    float Marck;

public:
    int result;
    void stud(int roll_no1, char name1[], float Marck1); // declaration
    void display()
    {
        cout << "the value is roll_no:=" << roll_no << endl;
        cout << "the value is name:=" << name << endl;
        cout << "the value is marck:=" << Marck << endl;
        cout << "the value is result:=" << result << endl;
    }
};
void student::stud(int roll_no1, char name1[], float Marck1)
{
    roll_no = roll_no1;
    name[12] = name1[12];
    Marck = Marck1;
}
int main()
{
    student somnath;
    somnath.result=99.34;
    somnath.stud(1,"ahjhsj",50);
    somnath.display();
    return 0;
}
