class Solution {
public:
    void merge(vector<int>& nums, vector<int>& leftSub, int left, vector<int>& rightSub, int right) {
        int i = 0, j = 0, k = 0;
        while (i < left && j < right) {
            if (leftSub[i] < rightSub[j]) {
                nums[k++] = leftSub[i++];
            } else {
                nums[k++] = rightSub[j++];
            }
        }
        while (i < left) {
            nums[k++] = leftSub[i++];
        }
        while (j < right) {
            nums[k++] = rightSub[j++];
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        int size = nums.size();
        if (size <= 1) {
            return nums; // Base case: return the vector if it is empty or has only one element.
        }

        int mid = size / 2;
        vector<int> leftSub(nums.begin(), nums.begin() + mid); // Create the left subarray using iterator range.
        vector<int> rightSub(nums.begin() + mid, nums.end()); // Create the right subarray using iterator range.

        sortArray(leftSub);
        sortArray(rightSub);
        merge(nums, leftSub, mid, rightSub, size - mid);
        return nums;
    }
};
