162. Find Peak Element

0(n)
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ind = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i] > nums[i-1]){
                ind = i;
            }
        }
        return ind;
    }
};

0(logn)
class Solution {
public:
    class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int low =0;
        int high = n-1;
        if(n == 1){
            return 0;
        }
        while(low <= high){
            int mid = (low+high)/2;
            if(mid == 0){
                if(nums[mid] > nums[mid+1]){
                    return mid;
                }
            }
            else if(mid == n-1){
                if(nums[mid] > nums[mid-1]){
                    return mid;
                }
            }
            else if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
                return mid;
            }
            if(nums[mid] > nums[mid+1]){
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return -1;
    }
};