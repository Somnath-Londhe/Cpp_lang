#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &s)
{
    cout<<"Displaying the vector :"<<endl;
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
}
int main()
{
    int elemant,size=3;
    //create a vector in char 4 elemant
     vector<int> c(4,32);
     display(c);
    //  vector<char> c(4);
     return 0;
}
