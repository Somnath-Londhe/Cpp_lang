#include <iostream>
#include <fstream>
/*
the usefuk class in for working withfiles in c++
And read and write a file is two hedar file {(i),(ii),(iii) }
 i)fstreambase
 ii)ifstream  -->derived for the fstreambase  -->writing the file
 iii)ofstream -->derived for the fstreambase -->reading the file


  Two way of the open file
  using the construct
  using the member function  in open() with calss


*/

using namespace std;
int main()
{
     // string st = "hallfsdfsdvsdv";
     // ofstream out("somnath.txt"); // write opration in
     // out << st;
      string st ;
     ifstream out("somnath1.txt"); // write opration in
     // out >> st;
     getline(out,st);
     cout<<st;

     return 0;
}
