#include <bits/stdc++.h>
using namespace std;

void solve() {
	
	int n;
	cin >> n;
	
	string str;
	cin >> str;
	
	int first = n;
	
	for(int i = 0; i < n - 2; i++) {
	    if(str[i] == '1') {
	        first = i;
	        break;
	    }
	}
	
	for(int i = first + 1; i < n; i++) {
	    str[i] = '0';
	}
	
	cout << str << endl;
	
}

int main() {
    
	int t = 1;
	cin >> t;
	
	for(int _t = 1; _t <= t; _t++) {
		solve();
	}
	
	return 0;
}