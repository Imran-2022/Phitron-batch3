<!-- find unique value using XOR -->

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int ans = 0, t;
    while (n--)
    {
        cin >> t;
        ans ^= t;
    }
    cout << ans << "\n";
    return 0;
}