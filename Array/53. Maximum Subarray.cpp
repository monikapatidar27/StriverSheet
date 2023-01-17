53. Maximum Subarray
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=nums[0];
        int curr=nums[0];
        for(int i=1;i<nums.size();i++){
            // int curr=0;
            // for(int j=i;j<nums.size();j++){
                curr=max(curr+nums[i],nums[i]);
                res=max(res,curr);
            // }
        }
        return res;
    }
};
