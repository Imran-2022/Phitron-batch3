### https://docs.google.com/document/d/1XqQJpOwL5t-qZLkAh696hb0lM9CXIdZBpu4lA4IeyT4/edit

### M. Capital or Small or Digit [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M]
```

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else if(ch>='0'&&ch<='9')
    {
        cout << "IS DIGIT" << endl;
    }
    return 0;
}

```
### C. Simple Calculator [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C]
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;
    // sum
    cout<<a<<" + "<<b<<" = "<<a+b<<endl;
    cout<<a<<" * "<<b<<" = "<<a*b<<endl;
    cout<<a<<" - "<<b<<" = "<<a-b<<endl;
    return 0;
}
```
### H. Sorting [https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H]
- solve using swap function...
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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            {
                if (arr[i] > arr[j])
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
```
### E. Max [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E]
- using max function.
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        maxi=max(maxi,arr[i]);
    }
    cout<<maxi<<endl;
    return 0;
}
```
### K. Max and Min [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K]
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    maxi=max(max(max(maxi,a),b),c);
    mini=min(min(min(mini,a),b),c);

    cout<<mini<<" "<<maxi<<endl;
    return 0;
}
```
###  Question: At first in the main function take an integer N as input. Then make a function named get_array() which will receive that N as a parameter. Then inside the get_array() function create an integer array of size N. Then the values of that array will be taken as input. After that return that array from that function and receive it in the main function and print the values of the array there.

```
#include <bits/stdc++.h>
using namespace std;

int *get_array(int n)
{
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return arr;
}
int main()
{
    int N;
    cin >> N;
    int *arr = get_array(N);
    for (int i = 0; i < N; i++)
    {
        cout<<arr[i]<< " ";
    }

    return 0;
}
```
### Question: Take an integer array A of size N as input. Then take an integer M as input. You need to take an array B of size M and copy all elements of array A to array B. Delete the array A and then take input of the rest of the elements of array B. After that print array B.
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int  i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int* newA=new int[m];
    for(int  i=0;i<n;i++){
        newA[i]=arr[i];
    }
    delete[] arr;
    for(int i=n;i<m;i++){
        cin>>newA[i];
    }
    for(int i=0;i<m;i++){
        cout<<newA[i]<<" ";
    }

    return 0;
}
```