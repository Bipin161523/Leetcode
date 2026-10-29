class Solution {
public:
    int solve(vector<int>&nums,int idx,int n,vector<int>&v){
        if(idx >= n)return 0;
        if(v[idx] != -1){
            return v[idx];
        }

        int steal = nums[idx] + solve(nums,idx+2,n,v);
        int skip  = solve(nums,idx+1,n,v);

        return v[idx] = max(steal,skip);
    }
    int rob(vector<int>& nums) {
        vector<int>v(101,-1);
        int n = nums.size();
        return solve(nums,0,n,v);
    }
};