class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        while(i<=j){
           int mid = (i+j) / 2;
            if(nums[mid]==target)return mid;
            if(nums[mid]>target) j=mid-1;
            if(nums[mid]<target) i=mid+1;
        }
        return -1;
    }
};