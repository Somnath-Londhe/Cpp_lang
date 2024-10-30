#include <iostream>
using namespace std;
class emp
{
private:
    int a, b;
      
public:
    int c, d;
    void number(int a1, int b2);
    void display()
    {
        cout << "the value is a:=" << a << endl;
        cout << "the value is b:=" << b << endl;
        cout << "the value is c:=" << c << endl;
        cout << "the value is d:=" << d << endl;
    }
};
void emp::number(int a1, int b2)
{
    a = a1;
    b = b2;
}
int main()
{
    emp somnath;
    somnath.c = 12;
    somnath.d = 21;
    somnath.number(1,2);
    somnath.display();
    return 0;
}
