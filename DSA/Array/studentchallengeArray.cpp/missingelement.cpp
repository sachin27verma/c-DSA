// #include<iostream>
// using namespace std; 
// class Array
// {
// private:
//     int size;
//     int length;
//     int *A;
// public:
  
//     Array()
//     {
//         int size=7;
//         int length=0;
        
//      int  A[7]={2,3,4,6,7,8,9};
//     }
//     Array(int sz)
//     {
//         int length;
//         int size=sz;
//         A=new int [sz];
//     }
//  int missingelement();
// };

// int Array::missingelement(){

// int diff;
// int p=0;
// diff=3;
// for(int i=0; i<7; i++)
// {
//     if(A[i]-i!=diff)
//     {
//          p= i+diff;
//         break;
//     }
// }
// return p;    

// }
// int main()
// {
//     Array arr(7);
//   cout<<  arr.missingelement();

    
//     return 0;
// }

//      single missing element...
// #include<iostream>
// using namespace std;
// int missingelement(int A[],int size){

// int diff;
// int p=0;
// diff=A[0]-0;
// for(int i=0; i<size; i++)
// {
//     if(A[i]-i!=diff)
//     {
//          p= i+diff;
//         break;
//     }
// }
// return p;    

// }
// int main()
// {
//     int A[7]={2,3,4,6,7,8,9};
//     int size=7;
//     cout<<missingelement(A,size);
//     return 0;
// }
//      Multiple missing elements...

// #include<iostream>
// using namespace std;
// int missingelement(int A[],int size){

// int diff;
// int p=0;
// diff=A[0]-0;
// for(int i=0; i<size; i++)
// {
//     if(A[i]-i!=diff)
//     {
//          p= i+diff;
//         break;
//     }
// }
// return p;    

// }
// int main()
// {
//     int A[9]={2,3,4,6,7,8,9,12,15};
//     int size=9;
//    // cout<<missingelement(A,size);
//    int diff;
// int p=0;
// diff=A[0]-0;
// for(int i=0; i<size; i++)
// {
//     if(A[i]-i!=diff )
//     {
//         while(diff<A[i]-i)
//         {
//          p= i+diff;
//         cout<<p<<endl;
//         diff++;
//         }
//     }
// }
//     return 0;
// }
 
 //   missing element using hashmap.......

 #include<iostream>
 using namespace std;
 int main()
 {
    int A[9]={2,3,4,6,7,8,9,12,15};
    int size=9;

    int H[15]={0};
int i; 
    for(i=0; i<size; i++)
    {
        H[A[i]]++;
    }

    for(i=0; i<15; i++)
    {
        if(H[i]==0)
        {
        cout<<i<<" ";
        }
    }


    return 0;
 }
