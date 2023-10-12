class Solution {
public:
    int lenOfLongSubarr(int a[], int N, int k) { 
        int i = 0, j = 0, sum = 0, mx = 0;
        while (j < N) {
            sum += a[j];
            while (sum > k) {
                sum -= a[i];
                i++;
            }
            if (sum == k) {
                mx = max(mx, j - i + 1);
            }
            j++;
        }
        return mx;
    }
};
