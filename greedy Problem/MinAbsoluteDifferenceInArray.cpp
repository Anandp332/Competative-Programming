#include <iostream>
#include <algorithm>
using namespace std;

int minAbsoluteDiff(int arr[], int n)
{
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    sort(arr, arr + n);
    int diff = arr[1] - arr[0];
    for (int i = 1; i < n; i++)
    {
        if (diff > (arr[i + 1] - arr[i]) && (arr[i + 1] - arr[i]) >= 0)
        {
            diff = (arr[i + 1] - arr[i]);
        }
    }
    return diff;
}

int main()
{

    int size;
    cin >> size;
    int *input = new int[1 + size];

    for (int i = 0; i < size; i++)
        cin >> input[i];

    cout << minAbsoluteDiff(input, size) << endl;

    return 0;
}
