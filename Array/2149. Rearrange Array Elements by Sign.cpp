2149. Rearrange Array Elements by Sign
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int nn=nums.size();
        vector<int>v(nn);
        int n=0,p=0,i=0;
        while(i<nn){
            if(i%2 == 0){
                while(nums[p] < 0){
                    p++;
                }
                v[i]=nums[p];
                p++;
            }
            else{
                while(nums[n] >= 0){
                    n++;
                }
                v[i]=nums[n];
                n++;
            }
            i++;
        }
        return v;
    }
};