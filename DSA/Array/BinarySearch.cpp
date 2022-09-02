#include <iostream>
using namespace std;
struct Array
{

    int A[10];
    int length;
    int size;
};

// int binarysearch(struct Array arr,int key)
// {
//     int l=0;
//     int h=arr.length-1;
//     int mid;
//     while(l<=h)
//     {
//      mid=(int)(l+h)/2;
//         if(key==arr.A[mid])
//         return mid;
//         else if (key<arr.A[mid])
//         {
//             h=mid-1;
//         }
//         else{
//              l=mid+1;
//         }
//     }
//     return -1;
// }
int BinarySearch(struct Array arr, int key)
{
    int l, mid, h;
    l = 0;
    h = arr.length - 1;
    mid=0;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int Rbinsearch(int A[], int key, int h, int l)
{
    int mid = 0;
    if (l <= h)
    {
        int mid = (l + h) / 2;
        if (key == A[mid])
            return mid;

        else if (key < A[mid])
        {
            return Rbinsearch(A, key, mid - 1, l);
        }
        else
        {
            return Rbinsearch(A, key, h, mid + 1);
        }
    }

    return -1;
}
int main()
{
    struct Array arr = {{2, 3, 4, 5, 8}, 5, 10};
    // cout << Rbinsearch(arr.A, 4, arr.length - 1, 0);
    cout << BinarySearch(arr,5);
    return 0;
}