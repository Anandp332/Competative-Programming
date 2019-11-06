#include <iostream>
using namespace std;
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

    int n = 4;                       //lets take 4 rupees change
    int numD = 2;                    // and total coin have 2
    cout << coin_change(n, d, numD); // ans should be 3 because we can replace 4 by 1 1 1 1 , 1 1 2 and  2 2.
}