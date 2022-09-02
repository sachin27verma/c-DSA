// #include<iostream>
// using namespace std; 

// int main()
// {
//     int size=10;
//     int length=5;
//     int add=10;
//     int arr[length]={5,5,3,2,3};
//     arr[length]=add;
//     length++;
//     for(int i=0; i<length; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


//        insert function

#include<iostream>
using namespace std;
int main()

{
    int size=10;
    int length=5;
    int add=10;
    int position=3;
    int arr[length]={5,5,3,2,3};
    for(int i=length; i>position; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[position]=add;
    length++;
    for(int i=0; i<length; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}