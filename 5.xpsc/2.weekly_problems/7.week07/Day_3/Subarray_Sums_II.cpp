#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
	cin >>n>>m;
	vector<int> vt(n);
	for (int i = 0; i < n; i++) cin >> vt[i];

	long long prefix_sum = 0;
	long long ans = 0;
	map<long long, int> sums;
	sums[0] = 1;

	for (int x : vt) {
		prefix_sum += x;
		ans += sums[prefix_sum - m];
		sums[prefix_sum]++;
	}
    
	cout << ans << endl;
    return 0;
}