// #include <iostream>
// using namespace std;
// float e(int x, int n)
// {
//     static float p = 1, f = 1;
//     float r;
//     if (n == 0)
//         return 1;
//     else{
//    r = e(x, n - 1);
//     p = p * x;
//     f = f * n;
    
//     return r + p / f;
//     }
// }
// int main()
// {
//     cout<<(float)e(1,5);
//     return 0;
// }


//    Horner rule's


// #include<iostream>
// using namespace std; 
// float e(float x, float n)
// {
//     static float s=1;
//     if(n==0)
//     return s;
//     s=1+(x/n)*s;
//     return e(x,n-1);
// }
// int main()
// {
//     cout<<e(1,15);
//     return 0;
// }


          // By looping...

#include<iostream>
using namespace std;
float e(float x, float n)
{
    static float s=1;
    while(n>0)
    {

        s=1+x*s/n;
        n--;
    }
    return s;
}
int main()
{
    cout<<e(1,23);
    return 0;
}         