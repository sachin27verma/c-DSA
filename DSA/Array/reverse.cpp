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
void reverse(struct Array *arr)
{
    int i, j;
    int *b;
    b = new int[arr->length];
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++)
    {
        b[j] = arr->A[i];
    }

    for (i = 0; i < arr->length; i++)
    {
        arr->A[i] = b[i];
    }

    
}
//       left shift

  void lshift(struct Array *arr)
    {
        int temp=arr->A[0];
        int i,j;
        for(i=0; i<arr->length; i++)
        {
            arr->A[i]=arr->A[i+1];
        }
        arr->A[arr->length-1]=temp;
    }
//       right shift

  void rshift(struct Array *arr)
    {
         int temp=arr->A[arr->length-1];
        int i,j;
        for(i=arr->length-1; i>=0; i--)
        {
            arr->A[i]=arr->A[i-1];
        }
        arr->A[0]=temp;
    }
void reverse2(struct Array *arr)
{
    int i, j;
    for (i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        swap(arr->A[i], arr->A[j]);
    }
}
int main()
{
    struct Array arr = {{2, 3, 4, 5, 8}, 5, 10};
    lshift(&arr);
    Display(arr);
    return 0;
}