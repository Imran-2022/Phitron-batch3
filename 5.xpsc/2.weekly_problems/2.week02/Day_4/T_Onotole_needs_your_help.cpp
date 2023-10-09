#include <iostream>
using namespace std;
int main() {
	int n;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while(cin>>n){
		int ans=0,t;
		while(n--){
			cin>>t;
			ans=ans^t;
		}
		cout<<ans<<"\n";
	}
	return 0;
}