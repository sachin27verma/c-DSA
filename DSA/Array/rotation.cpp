
         // Rotation of an element in Array[]
         // Method 1

// #include<iostream>
// using namespace std;
// int main()
// {
//     int A[5]={1,5,3,54,5};
//     int d=3;
//     int n=5;
//     int B[n];
//     int i;
//     int k=0;
//     for(i=d; i<n; i++)
//     {
//         B[k]=A[i];
//         k++;
//     }
//     for(i=0; i<d; i++)
//     {
//         B[k]=A[i];
//         k++;
//     }
//     for(i=0; i<n; i++)
//     {
//         cout<<B[i]<<" ";
//     }
//     return 0;
// }
 
        // Method 2
        

#include<iostream>
using namespace std;
int main()
{
    int A[5]={1,5,3,54,5};
     int d=3;
     int n=5;
     int p=1;
     int i;

     while(p<=d)
     {
        int last=A[0];
        for(i=0; i<n-1; i++)
        {
            A[i]=A[i+1];
        }
        A[n-1]=last;
     }

     for(i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}