#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    unordered_map<char,int>mp;

    for(char ch:s){
        mp[ch]++;
    }

    int cnt=0;
    char unq=0;

    for(auto x:mp){
        if(x.second%2){
            cnt++;
            unq=x.first;
        }
    }

    if((s.size()%2==0 && cnt>0) || cnt>1){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }

    string palindrome;
    for (auto x : mp) {
        palindrome += string(x.second / 2, x.first);
    }

    if (unq!=0) {
        palindrome = palindrome +unq+ string(palindrome.rbegin(), palindrome.rend());
    }else{
        palindrome = palindrome + string(palindrome.rbegin(), palindrome.rend());
    }
    
    cout<<palindrome<<endl;

    return 0;
}