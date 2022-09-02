#include<iostream>
using namespace std;

int fun(int n)
{
//    static int t=0; 
 
    if(n>0)
    {
        
        // t++;

        return n+fun(n-1);
    }
    else
    return 0;
}
int main()

{
    int x=5;
   cout<< fun(x);
    return 0;
}