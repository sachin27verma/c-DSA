#include <iostream>
using namespace std;
// class template<T>;
template <class T>
class Rectangle
{
private:
    T length;
    T breadth;

public:
    Rectangle(T l, T k);
    T area();
    T peri();
};
template <class T>
Rectangle<T>::Rectangle(T l, T k)
{
    length = l;
    breadth = k;
}

template <class T>
T Rectangle<T>::area()
{
    return length * breadth;
}

template <class T>
T Rectangle<T>::peri()

{
    return 2 * (length * breadth);
}

int main()
{
    Rectangle<float> r(2.5, 4);
    cout << r.area() << endl;

    return 0;
}