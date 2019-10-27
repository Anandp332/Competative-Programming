#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool scandies(ll a[], int n, ll c, ll mid) // funtion for check mid
{
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i] / mid;
    }
    if (sum >= c)
    {
        return true;
    }
    else
    {
        return false;
    }
}
ll candies(ll a[], int n, ll c, ll result)
{
    if (n == 0)
    {
        return result;
    }
    else
    {

        ll start = 0;
        ll end = a[n - 1];
        ll mid = (start + end) / 2;
        if (scandies(a, n, c, mid))
        {
            result = mid;
            return candies(a + mid + 1, (n - mid + 1), c, result);
        }
        else
        {
            return candies(a, (mid - 1), c, result);
        }
    }
}
int main()
{
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int n;
        cin >> n;
        ll a[n];
        ll c;
        cin >> c;
        for (int j = 0; j < n; j++)
        {
            cin >> a[n];
        }
        sort(a, a + n);
        ll cnt = candies(a, n, c, -1);
        cout << cnt << endl;
    }
    // Write your code here
}