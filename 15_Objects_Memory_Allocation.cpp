#include <iostream>
using namespace std;
class shop
{
     int itemid[100];
     int itemprince[100];
     int counter;

public:
     void counterr() { counter = 0; };
     void enter();
     void display();
};
void shop::enter()
{
     cout << "enter your itemid " << counter + 1 << endl;
     cin >> itemid[counter];
     cout << "enter your itemprince " << endl;
     cin >> itemprince[counter];
     counter++;     
}
void shop::display()
{
     for (int i = 0; i < counter; i++)
     {
          cout << "the shop itemid is:=" << itemid[i] << "and itemprince is :=" << itemprince[i]<<endl;
     }
}
int main()
{
     shop smart;
     smart.counterr();
     smart.enter();
     smart.enter();
     smart.enter();
     smart.display();
     return 0;
}
