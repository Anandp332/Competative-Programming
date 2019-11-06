#include <bits/stdc++.h>
using namespace std;
long staircase_helper(int n, long *output)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }
    if (n == 3)
    {
        return 4;
    }
    if (output[n] > -1)
    {
        return output[n];
    }
    long f = staircase_helper(n - 1, output);
    long s = staircase_helper(n - 2, output);
    long t = staircase_helper(n - 3, output);
    output[n] = f + s + t;
    return f + s + t;
}
long staircase(int n)
{
    /*  Don't write main().
     *  Don't read input, it is passed as function argument.
     *  Return output and don't print it.
     *  Taking input and printing output is handled automatically.
     */

    long output[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        output[i] = -1;
    }

    return staircase_helper(n, output);
}
int main()
{

    int n;
    cin >> n;
    cout << staircase(n) << endl;
}
