#include <bits/stdc++.h>
using namespace std;
int position(int a[], int n, int num)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (num >= a[i])
        {
            count++;
        }
    }
    return (count - 1);
}

bool isSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int num = a[i];
        int pos = position(a, n, num);
        if ((i + 1 == pos) || (i - 1 == pos) || (i == pos))
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int temp;
    cin >> temp;
    for (int i = 0; i < temp; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        if (isSort(a, n))
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }
    }
    return 0;
}