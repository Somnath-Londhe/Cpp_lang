/*
i)vector in manage the size
*/
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &s, int size)
{
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> s1;
    int size;
    cout << "Enter the vector size :" << endl;
    cin >> size;
    int v;
    for (int i = 0; i < size; i++)
    {
        cout << "enter the element " << endl;
        cin >> v;
        s1.push_back(v); // add the element
    }
    // s1.pop_back(); // Last  element remove
    display(s1, size);
    vector<int>::iterator iter = s1.begin(); // add the begin element
    s1.insert(iter + 1, 100, 143);           // insert the element in use itererater
    display(s1, size);
    return 0;
}
