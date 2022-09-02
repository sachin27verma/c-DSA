#include<iostream>
using namespace std;
int main()
{
    //        3 Method to represent 2D Array

    //      1. Totally in stack Memory

    int A[3][4]={{1,2,3,5},{5,6,8,6},{6,9,4,3}};
    int i,j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    //     2. Partially in stack Memory & Heap Memory

    int *B[3];
    B[0]=new int [4];
    B[1]=new int [4];
    B[2]=new int [4];

    B[2][3]=4;
    cout<<B[2][3];

    //      3. Totally in Heap Memory

    int **C;
    C=new int *[3];
    C[0]=new int [4];
    C[1]=new int [4];
    C[2]=new int [4];

    C[2][1]=5;
    cout<<endl<<C[2][1];
    return 0;
}