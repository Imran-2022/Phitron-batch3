#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int  t;
	cin>>t;
	while(t--){
	    int N,b;
	    cin>>N>>b;
	    
	    
	    int c = -1;
	    for(int i=0;i<N;i++){
	        int x;
	        cin>>x;
	        if((x&b)==b){
	          c=c&x;  
	        }
	    }
	    //cout<<c<<endl;
	    if(c==b){
	        cout<<"yes"<<endl;
	    }
	    else {
	        cout<<"no"<<endl;
	    }
	}
	
	return 0;
}