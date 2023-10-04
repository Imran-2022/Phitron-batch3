/**
 * problem link :
 * link 1 :https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
 * link 2 :https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
 * link 3 :https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1
 * 
 * comment : : 
 * 
*/

// code 1 :

class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int i=0,j=0;
        long long s=0, result=0;
        while(j<N){
            s+=Arr[j];
            if(j>=K-1){
                result=max(result,s);
                s-=Arr[i];
                i++;
            }
            j++;
        }
        return result;
    }
};

// code 2 :

vector<long long> printFirstNegativeInteger(long long int a[],
                                             long long int n, long long int k) {
                                                 
             long long int i = 0, j = 0;
    queue<long long int> q;
    vector<long long>vt;
    while (j < n)
    {
        if (a[j] < 0)
            q.push(a[j]);
        if (j >= k - 1)
        {
            if (q.size())
                // cout << q.front() << " ";
                vt.push_back(q.front());
            else
                // cout << 0 << " ";
                vt.push_back(0);
            if (a[i] < 0)
                q.pop();
            i++;
        }
        j++;
    }
    return vt;
                                                 
 }

// code 3 :

