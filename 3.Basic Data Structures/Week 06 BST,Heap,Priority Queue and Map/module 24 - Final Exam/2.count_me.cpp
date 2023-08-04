#include <bits/stdc++.h>
using namespace std;

pair<string, int> findMaxCount(string S)
{
    map<string, int> mp;
    istringstream ss(S);
    string word;
    int count = 0;
    string maxString;
    while (ss >> word)
    {
        mp[word]++;
        if (mp[word] > count)
        {
            count = mp[word];
            maxString = word;
        }
    }

    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout<<it->first<<" "<<it->second<<" "<<endl;
    //     if (it->second >= count)
    //     {
    //         maxString = it->first;
    //         count = it->second;
    //     }
    // }
    
    return make_pair(maxString, count);
}

int main()
{
    int t;
    cin >> t;
    // ignore new Line.
    cin.ignore();
    while (t--)
    {
        string S;
        getline(cin, S);
        auto maxCount = findMaxCount(S);
        cout << maxCount.first << " " << maxCount.second << endl;
    }
    return 0;
}