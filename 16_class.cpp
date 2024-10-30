#include<iostream>
using namespace std;
class even_odd{
    public:
    void  even();
};
void even_odd::even(){
    
    int a1;
    cin>>a1;
    
        if (a1%2==0)
        {
            cout<<"this is the even number"<<a1;
        }else
        {
            cout<<"this is the not even number"<<a1;
            
        }
         
    
    
}
int main()
{
    even_odd som;
    som.even();
     
     return 0;
}
