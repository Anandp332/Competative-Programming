#include <bits/stdc++.h>
using namespace std;
#define ll long long
pair<ll, ll> index(ll pref, int n, int money)
{
    ll start = pref[0];
    ll end = pref[n - 1];
    pair<ll, ll> ans;
    ll mid = (start + end) / 2;
    if (pref[mid] <= money)
    {
        if (pref[mid + 1] > money)
        {
            ans.first = mid;
            ans.second = money - pref[mid];
            return ans;
        }
        else
        {
            return index(pref + mid, n - mid, money);
        }
    }
    else
    {
        if (pref[mid - 1] < money)
        {
            ans.first = mid - 1;
            ans.second = money - pref[mid - 1];
            return ans;
        }
        else
        {
            return index(pref, mid, money);
        }
    }
    void momo(ll a[], int n, ll day, ll money)
    {
        ll pref[n];
        pref[0] = a[0];
        sum = 0;
        for (int i = 1; i < n; i++)
        {
            sum += a[i];
            pref[i] = sum;
        }
        pair<ll, ll> ans;
        ans = index(pref, n, money);
        cout << ans.first << " " << ans.second << endl;
    }
    int main()
    {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll day, money;
        cin >> day >> money;
        momos(a, n, day, money) return 0;
    }
