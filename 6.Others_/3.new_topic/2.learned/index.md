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



<!-- --remove duplicate but don't change indexes------ -->

void solve() {
    int n;
    cin >> n; 
    vector<int> vt(n);
    int i;
    fl (i,0,n) cin >> vt[i]; 
    vector<int> vt2;
    fll( i,n-1,0) {
        auto it = find(all(vt2), vt[i]);
        if (it == vt2.end()) {
            vt2.pb(vt[i]);
        }
    }
    cout << sz(vt2) << e;
    fll(i,vt2.size()-1,0)cout<<vt2[i]<<" ";
    newline
}

<!--  -->

