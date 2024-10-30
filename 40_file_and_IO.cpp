#include <iostream>
#include <fstream>
using namespace std;
int main()
{
     ofstream out("somnath1.txt");
     string content;
     cout << "Enter the your name:=" << endl;
     cin >> content;
     out << content;
     out.close();
     ifstream in("somnath1.txt");
     string name;
     in >> name;
     cout << "The name is :=" << name;
     in.close();
     return 0;
}
