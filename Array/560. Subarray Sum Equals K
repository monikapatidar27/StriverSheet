560. Subarray Sum Equals K


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count =0;
        map<int,int>mpp;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum == k){
                count++;
            }
            if(mpp.find(sum-k) != mpp.end()){
                count+=mpp[sum-k];
            }
            mpp[sum]++;
        }
        return count;
    }
};