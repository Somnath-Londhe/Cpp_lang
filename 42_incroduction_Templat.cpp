#include <iostream>
using namespace std;
template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(T n)
    {
        size = n;
        arr = new T[size];
    }
    T sum(vector &m)
    {
        T  s = 0;

        for (int  i = 0; i < size; i++)
        {
            s += this->arr[i] * m.arr[i];
        };
        return s;
    }
};
int main()
{
    // vector v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 1;
    // vector v2(3);
    // v2.arr[0] = 2;
    // v2.arr[1] = 1;
    // v2.arr[2] = 1;
    // int display = v1.sum(v2);
    // cout << "The display in addtion :" << display << endl;
//    ****************** using Templat ***************
    vector <float>v1(3);
    v1.arr[0] = 4.1;
    v1.arr[1] = 3.23;
    v1.arr[2] = 1.5;
    vector <float>v2(3);
    v2.arr[0] = 2.5;
    v2.arr[1] = 1.9;
    v2.arr[2] = 1.7;
    float display = v1.sum(v2);
    cout << "The display in addtion :" << display << endl;
    return 0;
}
