#include <iostream>
using namespace std;
class bankdeposit
{
    int principle;
    int year;
    float intestereat;
    float returnvalue;

public:
    bankdeposit(){};
    bankdeposit(int p, int y, float r);
    bankdeposit(int p, int y, int r);
    void display();
};
bankdeposit::bankdeposit(int p, int y, float r)
{
    principle = p;
    year = y;
    intestereat = r;
    returnvalue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + intestereat);
    }
}
bankdeposit::bankdeposit(int p, int y, int r)
{
    principle = p; 
    year = y;
    intestereat = float(r) / 100;
    returnvalue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + intestereat);
    }
}
 void bankdeposit::display()
{
    cout << "principle:=" << principle << endl;
    cout << "is year:=" << year << endl;
    cout << "is returnvalue:=" << returnvalue << endl;
}
int main()
{
    bankdeposit a, b, c;
    int p, y;
    float r;
    int R;
    cout << "enter the bankdeposit deactil" << endl;
    cin >> p >> y >> r;

    a = bankdeposit(p, y, r);
    a.display();
  
      cout << "enter the bankdeposit deactil" << endl;
    cin >> p >> y >> R;

    a = bankdeposit(p, y, r);
    a.display();

    return 0;
}
