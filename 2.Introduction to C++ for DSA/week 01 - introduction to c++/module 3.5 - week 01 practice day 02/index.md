### [https://docs.google.com/document/d/19LFcY5dA90bjWqYm_uQKvXT2y3BXYlM3s7NEBBZGxZ0/edit]

## Topics:
1. Basic C++
2. Class and Object

## Codeforces Problem Links:
- [V. Comparison](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V)
- [W. Mathematical Expression](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W)
- [G. Palindrome Array (solve using two pointers’ technique)](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G)
- [I. Smallest Pair (solve using min() function)](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I)
- [O. Sort String (solve using sort() function)](https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O)
- [H. Sorting (solve using sort() function)](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H)


## custom problem for practice 

**Question 1:**

Create three static objects with the help of the constructor of the following class.
```
Student
{
	name;
	roll;
	section;
	math_marks;
	cls;
}

```
Then compare those 3 objects and print who got the highest math_marks and print his/her name.

**Question 2:**

Create a dynamic object named dhoni of the following class. Don’t use a constructor here, that means you need to fill the data by yourself.

```
Cricketer
{
	jersey_no;
	country;
}

```

Then make another dynamic object named kohli and copy the data of the dhoni object to kohli and after that delete the dhoni object. Then print the jersey_no and country of kohli object.
**Note:**
At first try to do this, kohli=dhoni and see if it gives the correct output. If not, then think deeply why it didn’t work and try to copy the data manually like kohli->jersey_no=dhoni->jersey_no; 




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