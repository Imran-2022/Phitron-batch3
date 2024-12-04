#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(i, a, n) for (int i = a; i < n; i++)
#define pb push_back
#define all(p) p.begin(), p.end()
#define rall(v) v.rbegin(), v.rend()
#define vi vector<int>

void start_here(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==n/2 && i==n/2)cout<<"X";
            else if(i==j && j!=n/2 && i!=n/2)cout<<"\\";
            else if (j == n - i - 1)
            {
                if (j != n / 2 && i != n / 2)
                {
                    cout << "/";
                }
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--)start_here();
    return 0;
}