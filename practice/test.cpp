#include <iostream>
using namespace std;
int check(int n, int k)
{
    int temp = n;
    int sum1 = 0;
    int sum2 = 0;
    for (; n != 0;)
    {
        if (n < k)
        {
            sum1 += n;
            n = 0;
        }
        sum1 = sum1 + (n - k);
        n = n - k;
        sum2 = sum2 + (n / 10);
        n = n - (n / 10);
    }

    return (temp - sum2);
}

int main()
{
    int n = 20;
    int k = 1;
    int result = check(n, k);
    cout << "sum1 " << result << endl;
    return 0;
}