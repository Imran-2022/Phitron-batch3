#include <bits/stdc++.h>
using namespace std;
int main()
{

    map<string,int>mp;

    mp.insert({"sakib",1244});
    mp.insert({"ssd",122});
    mp.insert({"ssd12",12223});
    // mp.insert({"ssdd",0});


    mp["imran"]=121;
    mp["samm"]=1212;

    cout<<mp["samm"]<<endl;

    cout<<mp["ssd"]<<endl;// key val

    // na pale , 0 print hobe.

    // for(auto it= mp.begin();it!=mp.end();it++){
    //     cout<<it->first<<" " << it->second<<endl;
    // }

    if(mp.count("imran")>88)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;

}