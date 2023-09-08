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

### min val : 
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=abs(x);
    }
    int mn=*min_element(arr,arr+n);
    cout<<mn<<endl;
    return 0;
}

```

### convert string to num 
- stoi(string to interger);
 stoi expects a single string containing a valid integer representation, and it cannot handle spaces in the middle.
```
void solve()
{
    string st;
    cin >> st;
    for (int i = 0; i < 9; i++)
    {
        for (int j = i; j < 9; j++)
        {
            int n1 = st[i] - '0'; // Convert character to integer
            
        }
    }
}

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num){

    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0)return false;
    }
    return true;
}

void solve()
{
    string st;
    cin >> st;
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            string nm = string(1, st[i]) + string(1, st[j]); // Concatenate characters into a string
            int num = stoi(nm); // Convert the concatenated string to an integer
            if(isPrime(num)){
                cout<<num<<endl;
                return;
            }
        }
    }
    cout<<-1<<endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}


```

### tolower , toupper latter - 
```

#include <iostream>
#include <cctype>
#include <string>

int main() {
    std::string input;
    
    std::cout << "Enter a string: ";
    std::cin >> input;
    
    // Convert to lowercase
    for (char &c : input) {
        c = std::tolower(c);
    }
    
    std::cout << "Lowercase: " << input << std::endl;
    
    // Convert back to uppercase
    for (char &c : input) {
        c = std::toupper(c);
    }
    
    std::cout << "Uppercase: " << input << std::endl;
    
    return 0;
}


```

### remove duplicate form string - 
```
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(char & c:s){
        c=tolower(c);
    }
    s.erase(unique(s.begin(), s.end()), s.end());
    if(s=="meow")cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}

```