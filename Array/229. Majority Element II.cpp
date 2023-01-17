229. Majority Element II

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>v;
        map<int,int>mpp;
        for(auto el : nums){
            mpp[el]++;
        }
        for(auto el : mpp){
            if(el.second > (nums.size()/3)){
                v.push_back(el.first);
            }
        }
        return v;
    }
};