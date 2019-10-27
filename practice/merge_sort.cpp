#include <iostream>
using namespace std;
void merge(int input[], int si, int mid, int ei)
{
    int size = (ei - si) + 1;
    int i = si;
    int j = mid + 1;
    int k = 0;
    int *op = new int[size];
    while (i <= mid && j <= ei && k < size)
    {
        if (input[i] > input[j])
        {
            op[k++] = input[j++];
        }
        else
        {
            op[k++] = input[i++];
        }
    }
    while (i <= mid)
    {
        op[k++] = input[i++];
    }
    while (j <= ei)
    {
        op[k++] = input[j++];
    }
    int m = 0;
    for (int i = si; i <= ei; i++)
    {
        input[i] = op[m++];
    }
    delete[] op;
}
void helper(int input[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) >> 1;
    helper(input, start, mid);
    helper(input, mid + 1, end);
    merge(input, start, mid, end);
}
void mergeSort(int input[], int size)
{
    // Write your code here
    helper(input, 0, size - 1);
}
int main()
{
    int input[1000], length;
    cin >> length;
    for (int i = 0; i < length; i++)
        cin >> input[i];
    mergeSort(input, length);
    for (int i = 0; i < length; i++)
    {
        cout << input[i] << " ";
    }
}