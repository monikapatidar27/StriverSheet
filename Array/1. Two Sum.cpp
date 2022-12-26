1. Two Sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j] == target){
                    return {i,j};
                }
            }
        }
        return nums;
    }
};



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            if(mpp.find(target-nums[i]) != mpp.end()){
                return {i,mpp[target-nums[i]]};
            }
            mpp[nums[i]]=i;
        }
        return nums;
    }
};