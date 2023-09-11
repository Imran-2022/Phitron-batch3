#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    getline(cin,st);

    stringstream ss(st);
    string strm;
    int cnt=0;
    
    while(ss>>strm){
        for(int i=0;i<strm.size();i++){
            if(isalpha(strm[i])){
                cnt++;
                break;
            }
        }
    }

    cout<<cnt<<endl;

    return 0;
}