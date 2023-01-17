56. Merge Intervals

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        vector<vector<int>>v;
        sort(arr.begin(),arr.end());
        vector<int>temp=arr[0];
        for(auto el : arr){
            if(el[0]<=temp[1]){
                temp[1] = max(el[1],temp[1]);
            }
            else{
                v.push_back(temp);
                temp = el;
            }
        }
        v.push_back(temp);
        return v;
    }
};