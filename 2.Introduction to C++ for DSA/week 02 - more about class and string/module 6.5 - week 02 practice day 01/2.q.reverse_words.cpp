#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ss;
    getline(cin, ss);
    stringstream s(ss);
    string wrd;
    string str;
    while (s >> wrd)
    {
        reverse(wrd.begin(), wrd.end());
        str += wrd + " ";
    }
    str.resize(str.size() - 1);
    cout << str << endl;
    return 0;
}