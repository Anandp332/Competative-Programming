#include <iostream>

using namespace std;
int partition(int input[], int si, int ei)
{
    int temp = input[0];
    int maxcnt = 0;
    int mincnt = 0;
    for (int i = 1; i <= ei; i++)
    {
        if (temp >= input[i])
        {
            mincnt++;
        }
        else
        {
            maxcnt++;
        }
    }
    temp = input[mincnt];
    input[mincnt] = input[0];
    input[0] = temp;
    temp = input[mincnt];
    int i = si;
    int j = mincnt + 1;

    while (si < mincnt && j <= ei)
    {
        if (input[i] <= temp)
        {
            i++;
        }
        else if (input[j] > temp)
        {
            j++;
        }
        else
        {
            int t = input[i];
            input[i] = input[j];
            input[j] = t;
            i++;
            j++;
        }
    }
    return mincnt;
}
void helper(int input[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    partition(input, si, ei);
    quickSort(input, si, mid);
    quickSort(input + (mincnt + 1), size);
}
void quickSort(int input[], int size)
{
    /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
    helper(input, 0, size - 1);
}

int main()
{
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    quickSort(input, n);
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }

    delete[] input;
}
