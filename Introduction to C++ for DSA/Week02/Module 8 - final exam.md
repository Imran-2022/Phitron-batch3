## hacker rank problemset - 

### 1 Replace It
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s, ss;
        cin >> s;
        cin >> ss;
        while(s.find(ss)!=-1){
            s.replace(s.find(ss),ss.size(),"$");
        }
        cout <<s<< endl;
    }
    return 0;
}
```
### 2 Find Ratul
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss;
    ss << s;
    int count = 0;
    string word;
    while (ss >> word)
    {
        if (word == "Ratul")
        {
            count++;
        }
    }
    if (count)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
```
### 3 Get Reverse
```
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int math_marks;
    int eng_marks;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].math_marks >> a[i].eng_marks;
        cin.ignore();
    }
    for (int i = n-1; i >=0; i--)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }
    return 0;
}
```
### 4 Get Reverse II
```
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id;
    }
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (i < n / 2 && j >= n / 2)
        {
            swap(a[i].id, a[j].id);
        }
        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
    }
    return 0;
}

```
### 5 sort it problem 
```
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(Student a, Student b)
{
    if ((a.math_marks + a.eng_marks) == (b.eng_marks + b.math_marks))
    {
        if (a.id < b.id)
        {
            return true;
        }else{
            return false;
        }
    }
    else if ((a.math_marks + a.eng_marks) > (b.eng_marks + b.math_marks))
    {
        return true;
    }else{
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
        cin.ignore();
    }
    // sort function
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }
    return 0;
}

```
