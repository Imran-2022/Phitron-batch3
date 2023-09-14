#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    string sentence;
    getline(cin,sentence);
    string wrod;
    stringstream ss(sentence);

    map<string,int>mp;

    while(ss>>wrod){
        mp[wrod]++;
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    cout<<mp["is"]<<endl;
    return 0;

}
/*

input:

this is imranul haque. is

output:

haque. 1
imranul 1
is 2
this 1
2


*/