#include<iostream>
using namespace std;
// typedef struct node
// {
//     int student_no;
//     char name;
//     float marke;
// } s ;
union node
{
   int student_no;
    char name;
    
    
    float marke;
};

int main()
{
    enum dc{cdsxsfcx,vdxcfdx,sddc};
    cout<<cdsxsfcx;
    cout<<vdxcfdx;


    // union node somnath;
    // somnath.student_no=1;
    // somnath.name='s';
    // somnath.marke=99.00;
    // somnath.student_no=1;
    // somnath.name='s';
    // somnath.marke=99.00;
     
        // cout<<somnath.student_no<<endl;
        // cout<<somnath.name<<endl;
        // cout<<somnath.marke<<endl;

    
     
     return 0;
}
