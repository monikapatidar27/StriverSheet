128. Longest Consecutive Sequence

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int currS=1;
        int longests=1;
        int n=nums.size();
        
        for(int i=1;i<n;i++){
            if(nums[i] != nums[i-1]){
                if(nums[i] == nums[i-1]+1){
                currS+=1;
            }
            else{
                longests = max(longests,currS);
                currS=1;
            }
            }
        }
        return max(longests,currS);
    }
};