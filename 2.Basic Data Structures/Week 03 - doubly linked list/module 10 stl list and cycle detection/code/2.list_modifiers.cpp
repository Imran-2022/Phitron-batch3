#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {1, 2, 3, 4, 5, 656, 7};
    list<int> anotherList;
    // anotherList.assign(myList.begin(),myList.end());
    anotherList = myList;
    anotherList.push_back(2);
    anotherList.push_front(2134);
    anotherList.pop_front();

    anotherList.insert(next(anotherList.begin(), 5), 4444);
    anotherList.insert(next(anotherList.begin(), 5), {1222222, 555555});
    anotherList.insert(next(anotherList.begin(), 5), myList.begin(), myList.end());
    anotherList.erase(next(anotherList.begin(), 5));
    anotherList.erase(next(anotherList.begin(), 1), next(anotherList.begin(), 5));
    anotherList.erase(next(anotherList.begin(), 1), next(anotherList.begin(), 5));
    anotherList.erase(next(anotherList.begin(), 1), next(anotherList.begin(), 5));

    replace(anotherList.begin(), anotherList.end(), 4444, 0);

    cout << anotherList.size() << endl;
    for (int val : anotherList)
    {
        cout << val << " ";
    }

    cout << endl;
    auto it = find(anotherList.begin(), anotherList.end(), 656);
    if (it != anotherList.end())
    {
        cout << *it << endl;
    }
    else
    {
        cout << "not found !";
    }
    return 0;
}