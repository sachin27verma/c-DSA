#include <iostream>
using namespace std;
struct Array
{
    int A[10];
    int length;
    int size;
};
void Display(struct Array arr)
    {
        int i;
        for(i=0; i<arr.length; i++)
        {
            cout<<arr.A[i]<<" ";
        }

    }
struct Array *merge(struct Array *arr1, struct Array *arr2)
{

    struct Array *arr3;
    arr3 = (struct Array *)malloc(sizeof(struct Array));
    int i = 0, j = 0, k = 0;
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] > arr2->A[j])
        {
            arr3->A[k++] = arr2->A[j++];
        }
        else
        {
            arr3->A[k++] = arr1->A[i++];
        }
    }
    while(i<arr1->length)
    {
        arr3->A[k++] = arr1->A[i];
        i++;
    }

    for (; j < arr2->length; j++)
    {
        arr3->A[k++] = arr1->A[j];
    }
    arr3->length=arr1->length+arr2->length;
    return arr3;
}
int main()
{
    struct Array arr1 = {{0, 5, 10, 15, 20}, 5, 10};
    struct Array arr2 = {{2, 8, 9, 11,13}, 5, 10};
    
   struct Array *arr3 = merge(&arr1,&arr2);
    Display(*arr3);
    return 0;
}