### [docs link](https://docs.google.com/document/d/1WFGslKV39uVkaCA5pKfzaKMaZKQ7f2TCxuUagTJikkk/edit)

### P. Count Words [https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P]
```

```
### 
```

```
### 
```

```
### 
```

```
### 
```

```
### 4 A. Lucky? [https://codeforces.com/contest/1676/problem/A]
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int sum1=0,sum2=0;
        for(int i=0;i<3;i++){
            sum1+=s[i];
        }
        for(int i=3;i<6;i++){
            sum2+=s[i];
        }
        if(sum1==sum2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
```
### B. ICPC Balloons [https://codeforces.com/contest/1703/problem/B]
```

```