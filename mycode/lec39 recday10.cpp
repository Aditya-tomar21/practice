//leetcode 46 permutations

class Solution {
 private:
 void solve(vector<int>nums , vector<vector<int>>&ans , int index)
 {
    if(index>= nums.size())
    {
        ans.push_back(nums); //basecase
        return;
    }
    for(int i  = index ; i<nums.size();i++)
    {
        swap(nums[index], nums[i]);
        solve(nums,ans,index+1);
        swap(nums[index], nums[i]);
    }
 }


public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int> > ans;
        int index = 0;
        solve(nums ,ans ,index);
        return ans;
    }
};