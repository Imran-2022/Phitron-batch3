class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos=0;int neg=0;
        for(auto x:nums){
            if(x>0)pos++;
            if(x<0)neg++;
        }
        return max(pos,neg);
    }
};