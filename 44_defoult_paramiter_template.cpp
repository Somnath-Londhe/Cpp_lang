#include <iostream>
using namespace std;
template <class s = int, class s1 = float, class s2 = char>
class somnath
{
public:
    s a;
    s1 b;
    s2 c;
    somnath(s x, s1 y, s2 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value  A is :=" << a << endl;
        cout << "The value B is :=" << b << endl;
        cout << "The value  C is :=" << c << endl;
    }
};
int main()
{
    somnath<> s(2, 2.2, 'c');
    s.display();
    cout<<endl;
    somnath<char ,char,int > s1('a','d', 2);
    s1.display();
    return 0;
}
