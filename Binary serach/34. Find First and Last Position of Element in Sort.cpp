34. Find First and Last Position of Element in Sorted Array

class Solution {
public:
    int f(vector<int>&arr,int n, int target){
        int low =0,high=n-1;
        int i =-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid] == target){
                i=mid;
                high = mid -1;
            }
            else if(arr[mid] < target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return i;
    }
    int l(vector<int>&arr,int n, int target){
        int low =0,high=n-1;
        int i =-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid] == target){
                i=mid;
                low=mid+1;
            }
            else if(arr[mid] < target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return i;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
        int n=nums.size();
        int first = f(nums,n,target);
        int last = l(nums,n,target);
        v.push_back(first);
        v.push_back(last);
        return v;
    }
};