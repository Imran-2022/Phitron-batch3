### [https://docs.google.com/document/d/19LFcY5dA90bjWqYm_uQKvXT2y3BXYlM3s7NEBBZGxZ0/edit]

### V. Comparison [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V]
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,c;
    char b;
    cin>>a>>b>>c;
    if(b=='>'){
        if(a>c){
            cout<<"Right";
        }else{
            cout<<"Wrong";
        }
    }
    if(b=='<'){
        if(a<c){
            cout<<"Right";
        }else{
            cout<<"Wrong";
        }
    }
    if(b=='='){
        if(a==c){
            cout<<"Right";
        }else{
            cout<<"Wrong";
        }
    }
    return 0;
}
```
### W. Mathematical Expression [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W]
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char d,e;
    cin>>a>>d>>b>>e>>c;
    if(d=='+'){
        if(a+b==c){
            cout<<"Yes";
        }else{
            cout<<a+b;
        }
    }
    if(d=='-'){
        if(a-b==c){
            cout<<"Yes";
        }else{
            cout<<a-b;
        }
    }
    
    if(d=='*'){
        if(a*b==c){
            cout<<"Yes";
        }else{
            cout<<a*b;
        }
    }
    
    return 0;
}
```
### G. Palindrome Array [https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G]
- solve using two pointers technique.
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int flag = 0;

    int i=0,j=n-1;

    while(i<=j){
        if(arr[i]==arr[j]){
            flag=1;
        }else{
            flag=0;
            break;
        }
        i++;
        j--;
    }

  
    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
```
### I. Smallest Pair [https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I]
- solve using min function.
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int minimum = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                minimum = min(minimum, arr[i] + arr[j] + j - i);
            }
        }
        cout << minimum << endl;
    }
    return 0;
}
```
### O. Sort String [https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O]
- sort using sort function..
```

```
### 
```

```