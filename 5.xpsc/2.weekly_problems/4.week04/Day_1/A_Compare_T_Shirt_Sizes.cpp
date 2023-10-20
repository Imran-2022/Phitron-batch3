#include <bits/stdc++.h>
using namespace std;

int cmp (string a) {
	if (a == "M") return 0;
	if (a.back() == 'S') return - (a.size());
	else return a.size();
}
 
void solve(){
    string a, b;
	
	cin >> a >> b;
	
	if (cmp(a) == cmp(b)) {
		cout << "=" << "\n";
	} else if (cmp(a) < cmp(b)) {
		cout << "<" << "\n";
	} else {
		cout << ">" << "\n";
	}
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}