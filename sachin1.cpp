#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
for (int i = 0; i < n; i++)
{
    if (n % 4 == 0)
    {
        cout << n + 28 << endl;
    }
    else if (n % 4 == 1)
    {
        cout << n + 6 << endl;
    }
    else if (n % 4 == 2 || n % 4 == 3)
    {
        cout << n + 11 << endl;
    }
}
}
