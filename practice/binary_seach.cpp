#include <bits/stdc++.h>
using namespace std;
int binary_search(vector<int> v, int start, int end, int p, int temp)
{
    int mid;
    mid = (start + end) / 2;
    if (start > end)
    {
        return temp;
    }
    else if (p == v[mid])
    {
        temp = mid;
        start = mid + 1;
        return binary_search(v + mid + 1, start, end, temp);
    }
    else if (v[mid] > p)
    {
        end = mid - 1;
        return binary_search(v, start, end, p, temp);
    }
    else
    {
        start = mid + 1;
        return binary_search(v[start], start, end, p, temp);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int var;
        cin >> var;
        v.push_back(var);
    }
    sort(v.begin(), v.end());
    int p;
    cin >> p;
    int temp = 0;
    int index = binary_search(v, 0, n, p, temp);
    cout << index << endl;
    return 0;
}