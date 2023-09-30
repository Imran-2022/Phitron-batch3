/**
 * problem link :
 * link 1 :https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
 * link 2 :https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
 * link 3 :https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1
 * 
 * new to me : 
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


// code 3 :

