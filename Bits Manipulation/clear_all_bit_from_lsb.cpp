#include <iostream>
using namespace std;
int lsb(int n, int i)
{
    int p = ~((1 << (i + 1)) - 1);
    return (n & p);
}
int main()
{
    int n, i;
    cin >> n >> i;
    cout << lsb(n, i) << endl;
} // namespace std;
