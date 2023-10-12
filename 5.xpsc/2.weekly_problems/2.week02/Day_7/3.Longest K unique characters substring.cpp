class Solution{
public:
    int longestKSubstr(string s, int k) {
        int i = 0, j = 0;
        int fr[26] = {0};
        int unq = 0;
        int maxLength = -1; // Initialize maxLength to -1

        while (j < s.size()) {
            fr[s[j] - 'a']++;
            if (fr[s[j] - 'a'] == 1) {
                unq++;
            }

            while (unq > k) {
                fr[s[i] - 'a']--;
                if (fr[s[i] - 'a'] == 0) {
                    unq--;
                }
                i++;
            }

            if (unq == k) {
                maxLength = max(maxLength, j - i + 1);
            }

            j++;
        }

        return maxLength; // Return maxLength, which will be -1 if no valid substring is found.
    }
};