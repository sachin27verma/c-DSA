//        Delete Function

#include <iostream>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};
void Display(struct Array array)
{
    int i = 0;
    for (i = 0; i < array.length; i++)
    {
        cout << array.A[i] << " ";
    }
}
int Deleting(struct Array *array, int index)
{
    int i;
    if (index >= 0 && index < array->length)
    {

        int x = array->A[index];
        for (i = index; i < array->length - 1; i++)
        {
            array->A[i] = array->A[i + 1];
        }
        array->length--;
        return x;
    }
    return 0;
}
int main()
{
    struct Array array = {{4, 3, 67, 5, 4, 3}, 10, 6};
    cout << Deleting(&array, 3) << endl;
    Display(array);
    return 0;
}