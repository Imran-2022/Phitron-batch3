### [code link](https://docs.google.com/document/d/12ndPYTf-_n3Lp1MJCfz4dmUdqxWCyGx0drXepV04HKQ/edit)

### [Z. Binary Search](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z)
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    while (m--)
    {
        int x;
        cin >> x;
        int s = 0;
        int e = n - 1;
        bool flag = false;
        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (arr[mid] == x)
            {
                flag = true;
                break;
            }
            if (x > arr[mid])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        if (flag)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}
```

### [Y. Range sum query](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y)

```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
    long long int arr[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long int arr2[n];
    arr2[0]=arr[0];
    for(long long int i=1;i<n;i++){
        arr2[i]=arr[i]+arr2[i-1];
    }
  
    while(m--){
        long long int s1,s2,sum;
        cin>>s1>>s2;
        s1--;
        s2--;
        if(s1==0){
            sum=arr2[s2];
        }
        else{
            sum=arr2[s2]-arr2[s1-1];
        }
        
        cout<<sum<<endl;
    }
    return 0;
}

```