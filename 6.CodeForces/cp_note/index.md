### find in vector, till end

```

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin >> st;
    vector<char> ct;
    for (int i = 0; i < st.length(); i++)
    {
        if (find(ct.begin(), ct.end(), st[i]) == ct.end())
        {
            ct.push_back(st[i]);
        }
    }
    if (ct.size() % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
    return 0;
}

```

### take text as input -
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ss;
    getline(cin,ss);
    cout<<ss<<endl;
    return 0;
}



```