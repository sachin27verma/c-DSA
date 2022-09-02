              //Linear Search........
#include<iostream>
using namespace std;
    struct Array {

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

void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

    int LinearSearch(struct Array *arr, int key)
    {
        int i;
        for(i=0; i<arr->length; i++)
        {
            if(key==arr->A[i])
            { 
                swap(&arr->A[i],&arr->A[0]);
                return i;
            }
        }
        return -1;
    }

int main()
{
    struct Array arr={{2,3,6,9,5,4},6,10};
   cout<< LinearSearch(&arr, 9)<<endl;
    Display(arr);
    return 0;
}