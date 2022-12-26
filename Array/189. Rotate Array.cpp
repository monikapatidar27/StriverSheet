189. Rotate Array

class Solution {
public:
    void right(vector<int>&nums,int l,int r){
        int low = l;
        int high = r-1;
        while(low <= high){
            int temp= nums[low];
            nums[low] = nums[high];
            nums[high] = temp;
            high--;
            low++;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        right(nums,0,n-k);
        right(nums,n-k,n);
        reverse(nums.begin(),nums.end());
    }
};