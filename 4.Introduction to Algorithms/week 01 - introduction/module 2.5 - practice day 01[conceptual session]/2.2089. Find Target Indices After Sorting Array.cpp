class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>vt;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target)vt.push_back(i);
        }
        return vt;
    }
};