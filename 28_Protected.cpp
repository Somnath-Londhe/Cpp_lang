#include <iostream>
using namespace std;
// protected is the (private ) but inheret strtment;
/*
for the protected member :
    1.private
    2.protecte
    3.public
*/
//this code is not a run fir the prodected function that it .
class emp
{
protected:
    int a;

private:
    int b;

public:
    int c;
};
class derived : protected emp
{
};
int main()
{
   class d;
   cout <<d.c;
    return 0;
}
