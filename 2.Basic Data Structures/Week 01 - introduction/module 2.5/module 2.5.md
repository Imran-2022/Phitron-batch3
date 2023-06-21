### [problem set](https://docs.google.com/document/d/1IEt17Vf6dXfBIIHueOIxSeRmY_bDQ2pDFW5vi4ezZw8/edit?usp=sharing)

### [L. New Array (Solve using vector)](https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L)
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin>>n;

    vector<int> v1(n);

    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    vector<int> v3;
   
    for (int i : v2)
    {
        v3.push_back(i);
    }
     for (int i : v1)
    {
        v3.push_back(i);
    }

    for (int i : v3)
    {
        cout << i << " ";
    }
    return 0;
}
```
### [F. Reversing (Solve by reversing the vector)](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F)
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v1(n);
    int i=0;
    while(n--){
        cin>>v1[i];
        i++;
    }

    for(auto i=v1.end()-1;i>=v1.begin();i--){
        cout<<*i<<" ";
    }
    
    return 0;
}
```
### [C. Replacement (Solve using vector)](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C)
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(auto it= v.begin();it<v.end();it++){
        if(*it>0){
            cout<<"1"<<" ";
        }else if(*it<0){
            cout<<"2"<<" ";
        }else{
            cout<<"0"<<" ";
        }
    }
    return 0;
}
```
### [D. Counting Elements (Solve using vector and built in functions)](https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D)
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int count = 0;
    for (auto it = v.begin(); it < v.end(); it++)
    {
        auto f = find(it, v.end(), *it + 1);
        if (f != v.end())
            count++;
    }
    cout << count << endl;
    return 0;
}
```
### [J. Count Letters (Use vector as frequency array) ](https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J)
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    vector<int> v(26, 0);
    while (cin >> c)
    {
        v[c-'a']++;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (v[i - 'a'])
            cout<<i<<" : "<<v[i-'a']<<endl;
    }

    return 0;
}
```

### [Y. Range sum query (You’ll get TLE, no problem, don’t ask for support)](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y)
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (m--)
    {
        int startP, endP;
        cin >> startP >> endP;
        int sum=0;
        for(auto it=v.begin()+startP-1;it<v.begin()+endP;it++){
            sum+=*it;
        }
        cout<<sum<<endl;
    }

    return 0;
}
```
### [Z. Binary Search (You’ll get TLE, no problem, don’t ask for support)](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z)
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (m--)
    {
        int src;
        cin>>src;
        int gotIt=0;
        for(int abc:v){
            if(abc==src){
                gotIt=1;
                break;
            }
        }

        if(gotIt){
            cout<<"found"<<endl;
        }else{
            cout<<"not found"<<endl;
        }
       
    }

    return 0;
}
```
