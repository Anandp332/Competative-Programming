#include <iostream>
using namespace std;
//using dynamic programming
int coin_change_fast(int n, int *d, int numD, int **output)
{
    // base case
    //if we have only one coin
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }
    //base case
    //if we haven't any coin
    if (numD == 0)
    {
        return 0;
    }
    // checking if solution already availble
    if (output[numD][n] > -1)
    {

        return output[numD][n];
    }
    // base case
    // if n become 1rs and d have 2 or 5 value of coin then next step will be -ve
    if (n < 0)
    {
        return 0;
    }
    // if we take d[0] element then
    int first = coin_change_fast(n - d[0], d, numD, output);
    // if we didn't take d[0] then
    int second = coin_change_fast(n, d + 1, numD - 1, output);
    //sum of including d[0] and not including d[0] will be total count
    //updating output array
    output[numD][n] = first + second;
    return first + second;
}
int countWaysToMakeChange(int d[], int numD, int n)
{

    /*  Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
   */
    int **p = new int *[numD];
    for (int i = 0; i < numD + 1; i++)
    {
        p[i] = new int[n + 1];
        for (int j = 0; j < n + 1; j++)
        {
            p[i][j] = -1;
        }
    }
    return coin_change_fast(n, d, numD, p);
}

//using without dp
int coin_change(int n, int *d, int numD)
{
    // base case
    //if we have only one coin
    if (n == 0)
    {
        return 1;
    }
    //base case
    //if we haven't any coin
    if (numD == 0)
    {
        return 0;
    }

    // base case
    // if n become 1rs and d have 2 or 5 value of coin then next step will be -ve
    if (n < 0)
    {
        return 0;
    }
    // if we take d[0] element then
    int first = coin_change(n - d[0], d, numD);
    // if we didn't take d[0] then
    int second = coin_change(n, d + 1, numD - 1);
    //sum of including d[0] and not including d[0] will be total count
    return first + second;
}

int main()
{
    int d[2] = {1, 2}; //taken 1rs coin and 2rs coin

    int n = 4;    //lets take 4 rupees change
    int numD = 2; // and total coin have 2
                  // this funtion is gone very slow because in this fn there are 2 recursion and every time work gone repeated
    cout << coin_change(n, d, numD) << endl;
}