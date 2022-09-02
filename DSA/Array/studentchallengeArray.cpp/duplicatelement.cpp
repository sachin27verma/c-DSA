//       in sorted Array


// #include<iostream>
// using namespace std;
// int main()
// {
//     int A[16]={1,1,2,2,8,8,8,8,9};
//     int H[9]={0};
//     for(int i=0; i<9; i++)
//     {
//         H[A[i]]++;
//     }

//     for(int t=0; t<9; t++)
//     {
//         if(H[t]>0)
//         {
//             cout<<t<<"-"<<H[t]<<"times"<<endl;
//         }
//     }
    
//     int lastduplicate=0;
//     int count=1;
//     for(int i=0; i<9; i++)
//     {
//         if(A[i+1]==A[i] && A[i+1]!=lastduplicate)
//         {
//             cout<<A[i]<<"-";
//             int j=i+1;
//             while(A[i]==A[j])
//             {
//                 count++;
                
//                 j++;
//             }
//             cout<<count<<"times"<<endl;
//             i=j-1;
//             lastduplicate=A[i];

//         }
//         count=1;
//     }
//     return 0;
// }


// in unsorted Array

#include<iostream>
using namespace std;
int main()
{
    int A[10]={5,6,3,8,6,1,3,4,4,5};
    for(int i=0; i<10; i++)
    {
        int count=1;
        if(A[i]!=-1){
        for(int j=i+1; j<10; j++)
        {
            if(A[j]==A[i])
            {
                count++;
                A[j]=-1;
            }
        }
        }
        if(count>1)
        {
            cout<<A[i]<<"-"<<count<<"times"<<endl;
        }

    }

    return 0;
}