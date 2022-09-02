#include <iostream>
using namespace std;
struct Array
{

    int A[10];
    int length;
    int size;
};
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void Display(struct Array array)
{
    int i = 0;
    for (i = 0; i < array.length; i++)
    {
        cout << array.A[i] << " ";
    }
}
void insertsort(struct Array *arr, int k)
{
    int i = arr->length - 1;
    while (arr->A[i] > k)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }

    arr->A[i + 1] = k;
    arr->length++;
}
int issorted(struct Array arr)
{
    int i;
    for (i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
            return 0;
    }

    return 1;
}
void sortofsamesign(struct Array *arr)
{
    int i = 0;
    int j = arr->length - 1;
    while (i < j)
    {
        while (arr->A[i] < 0)
        {
            i++;
        }
        while (arr->A[j] > 0)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr->A[i], arr->A[j]);
        }
    }
}
int main()
{
    struct Array arr = {{2, 3, -4, 5, -9}, 5, 10};
    // insertsort(&arr,6);
    sortofsamesign(&arr);
    // cout << issorted(arr) << endl;
    Display(arr);
    return 0;
}