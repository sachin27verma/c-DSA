#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    // constructor
    Rectangle(int l, int k)
    {
        length = l;
        breadth = k;
    }
    //fuction
    int area()
    {
        return length * breadth;
    }
    void change(int l, int k)
    {
        length = l;
        breadth = k;
    }
};

int main()
{
    Rectangle r(3, 6);

    cout << r.area() << endl;
    // object
    r.change(34, 7);
    cout << r.area() << endl;

    return 0;
}