//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



int longestSubstrDistinctChars(string S) {
    int n = S.length();
    int maxLength = 0;
    std::unordered_map<char, int> charIndex;
    int left = 0;

    for (int right = 0; right < n; ++right) {
        if (charIndex.find(S[right]) != charIndex.end()) {
            left = std::max(left, charIndex[S[right]] + 1);
        }
        charIndex[S[right]] = right;
        maxLength = std::max(maxLength, right - left + 1);
    }

    return maxLength;
}
