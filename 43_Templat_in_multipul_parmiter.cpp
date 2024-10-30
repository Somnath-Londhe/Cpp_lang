#include<iostream>
using namespace std;
/*
  template<class T1,classT2>
  syntax:
  class myclass{

  };
*/
template <class T1, class T2>
class student{
    public:
    T1 no;
    T2 name;
    student(T1 a,T2 b){
        no=a;
        name=b;
    }
    void display(){
        cout<<this->no<<this->name;
    }
};
int main()
{
    student<int,char>onj(1,'D');
    // student<int,float>onj(1,'D');
    // student<char,char>onj(1,'D');
    onj.display();
     return 0;
}
