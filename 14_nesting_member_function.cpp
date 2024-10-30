#include <iostream>
#include <string>
using namespace std;
class binary
{
    string b;

public:
    void read();
    void chack_binary();
    void convert();
    void display();
};
void binary::read()
{
    cout << "enter the number" << endl;
    cin >> b;
}
void binary::chack_binary()
{
    for (int i = 0; i < b.length(); i++)
    {
        if (b.at(i) != '0' && b.at(i) != '1')
        {
            cout << "incorrect the binary number" << endl;
            exit(0);
        }
    }
}
void binary::convert()
{
     chack_binary();
    for (int i = 0; i < b.length(); i++)
    {
        if (b.at(i) == '0')
        {
            b.at(i) = '1';
        }
        else
        {
            b.at(i) = '0';
        }
    }
    cout<<endl;
}
void binary::display()
{
    for (int i = 0; i < b.length(); i++)
    {
        cout << b.at(i);
    }
    // cout<<endl;
}
int main()
{
    binary a;
    a.read();
    // a.chack_binary();
    a.display();
    a.convert();
    a.display();

    return 0;
}
