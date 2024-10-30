#include <iostream>
#include <fstream>
using namespace std;
int main()
{
     string  name = "somnath londhe";
     ofstream out("som.txt");
     out << name;
     string name1;
     ifstream in("som1.txt");
     //     in>>name1;
     getline(in, name1);
     cout << name1;
              
     return 0;
}
