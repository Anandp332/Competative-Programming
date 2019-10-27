#include <iostream>
using namespace std;
bool even_odd(int n)
{
    if ((n & 1) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;

    cin >> n;

    cout << even_odd(n) << endl;

    return 0;
}
