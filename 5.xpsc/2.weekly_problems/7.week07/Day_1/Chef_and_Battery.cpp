#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int cnt=0;
	    while(x>50){
	        x-=3;
	        cnt++;
	    }
	    while(x<50 && x%2==1){
	        cnt++;
	        x-=3;
	    }
	    while(x!=50){
	        cnt++;
	        x+=2;
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
