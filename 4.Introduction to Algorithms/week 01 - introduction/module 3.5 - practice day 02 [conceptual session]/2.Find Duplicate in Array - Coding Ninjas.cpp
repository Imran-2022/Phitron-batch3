#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){ 
    for(int i =0; i<n; i++)
    {
        int duplicate = arr[i];
        for(int j =i+1; j<n; j++)
        {
            if(duplicate==arr[j])
            {
                return duplicate;
            }
        }
    }
}
