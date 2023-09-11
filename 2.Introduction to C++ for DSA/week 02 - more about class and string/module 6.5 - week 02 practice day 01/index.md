### topic :

- String Class 
- Stringstream


### Codeforces Problem Links

1. [P. Count Words](https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P)

2. [Q. Reverse Words](https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q)

3. [V. Replace Word](https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V)

4. [A. Lucky?](https://codeforces.com/contest/1676/problem/A)

5. [B. ICPC Balloons](https://codeforces.com/contest/1703/problem/B)

happy coding .


### P. Count Words [https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P]
```

```
###  replace word !! 
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    while(s.find("EGYPT")!=-1){
        s.replace(s.find("EGYPT"),5," ");
    }
    cout<<s<<endl;
    return 0;
}
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