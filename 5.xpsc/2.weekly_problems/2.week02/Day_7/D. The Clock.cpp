#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define newline cout << endl;
#define e '\n'
#define fl(i, a, n) for (int i = a; i < n; i++)
#define fll(i, a, b) for (i = a; i >= b; i--)
#define F first
#define S second
#define pb push_back
#define all(p) p.begin(), p.end()
#define rall(v) v.rbegin(), v.rend()
#define si set<int>
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vpi vector<pii>
#define vpp vector<pair<int, pii>>
#define mii map<int, int>
#define mpi map<pii, int>
#define spi set<pii>
#define sz(x) ((int)x.size())
#define que_max priority_queue<int>
#define que_min priority_queue<int, vi, greater<int>>
#define print(a)for (auto x : a)cout << x << ' ';cout<<e;
#define print1(a)for (auto x : a)cout << x.F << ' ' << x.S << endl;
#define print2(a, x, y)for (int i = x; i < y; i++)cout << a[i] << ' ';cout<<e;
#define IMRAN ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;

bool check_pan(string time) {
    return time[0] == time[4] && time[1] == time[3];
}

int main()
{
    IMRAN
    int testcase;
    cin >> testcase;

    for (int t = 0; t < testcase; t++) {
        string time;
        int gap;
        int ans = 0;
        set<string> seen;

        cin >> time >> gap;
        while (seen.find(time) == seen.end()) {
            if (check_pan(time)) ans++;
            seen.insert(time);

            string str_hour = time.substr(0,2);
            string str_minute = time.substr(3,2);
            // cout << str_hour << " " << str_minute << "\n";
            int hour = stoi(str_hour);
            int minute = stoi(str_minute);
            int add_hour = gap / 60;
            int add_minute = gap % 60;

            hour += add_hour;
            minute += add_minute;

            while (minute >= 60) {
                minute -= 60;
                hour += 1;
            }

            hour = hour % 24;

            time[0] = hour / 10 + '0';
            time[1] = hour % 10 + '0';
            time[3] = minute / 10 + '0';
            time[4] = minute % 10 + '0';

            // cout << time << "\n";
        }

        cout << ans << "\n";
    }
    return 0;
}
