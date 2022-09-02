#include <iostream>
using namespace std;
// Iteration Method
int fib(int n)
{
    static int s = 1, t0 = 0, t1 = 1;
    int i;
    for (i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}
// Recursion Method
int rfib(int n)
{
    if (n <= 1)
        return n;
    else
    {
        return rfib(n - 2) + rfib(n - 1);
    }
}

//    Memonization Method
int f[10];

int mfib(int n)
{
    if (n <= 1)
    {
        f[n] = n;
        return n;
    }
    else
    {
        if (f[n - 2] == -1)
        {
            f[n - 2] = mfib(n - 2);
        }
        if (f[n - 1] == -1)
        {
            f[n - 1] = mfib(n - 1);
        }
        f[n] = f[n - 1] + f[n - 2];
        return  f[n];
    }
}

int main()
{

    int i;
    for (i = 0; i < 10; i++)
    {
        f[i] = -1;
    }

    cout << mfib(6);
    return 0;
}