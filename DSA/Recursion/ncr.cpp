#include<iostream>
using namespace std;
 
       //       using factorial

       int fact(int n)
       {
        if(n==1)
        return 1;
        else
        return fact(n-1)*n;
       }

       int ncr(int n, int r)
       {
        
        if(r==0)
        return 1;
        int num=fact(n);
        int den=fact(n-r)*fact(r);
             
             return num/den;
       }
 
 //          using Recursion

 int NCR(int n, int r)
 {
    if(r==0 || n==r)
        return 1;
    else
        return NCR(n-1, r-1)+NCR(n-1, r);
 }
int main()
{
    cout<<NCR(5,1);
    return 0;
}