#include<iostream>
using namespace std;
class Animal{
    public:
    void Animalsound(){
      cout<<"The animal makes a sound"<<endl;
    }
};
class Dog:public Animal{
   public:
   void dog(){

   cout<<"sound dog is : bow bow"<<endl;
   }
      
};
class pig:public Animal{
   public:
   void dd(){

   cout<<"sound dog is :wee wee "<<endl;
   }
      
};
class somnath: public Dog ,public pig{
};
int main()
{
    somnath s;
    s.dd();
    s.dog();
    

    return 0;
}

