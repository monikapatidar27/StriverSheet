136. Single Number

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int ans;
        for(auto el: mpp){
            if(el.second == 1){
                ans=el.first;
            }
        }
        return ans;
    }
};



class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++){
            res=res^nums[i];
        }
        return res;
    }
};