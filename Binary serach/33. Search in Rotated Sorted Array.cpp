33. Search in Rotated Sorted Array
0(n)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int id = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == target){
                id = i;
            }
        }
        return id;
    }
};
 
 0(logn)
 class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high = nums.size()-1;
        int n= nums.size();
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] >= nums[low]){
                if(nums[low] <= target && target <= nums[mid]){
                    high = mid -1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(nums[mid] <= target && target <= nums[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};