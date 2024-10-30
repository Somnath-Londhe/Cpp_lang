#include <iostream>
#include <list>
using namespace std;
void display(list<int> &ist){
      list<int> ::iterator i;
      for ( i = ist.begin(); i !=ist.end(); i++)
      {
            cout <<*i<<" ";
      }
      
}
int main()
{
      list<int>l1;
      l1.push_back(5);
      l1.push_back(2);
      l1.push_back(3);
      l1.push_back(4);
      l1.push_back(5);
      display(l1);

      return 0;
}
