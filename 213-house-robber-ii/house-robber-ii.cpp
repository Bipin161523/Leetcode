class Solution {
public:
    int Rob(vector<int>&v, int idx,int n,vector<int>&t){
        if(idx >= n){
            return 0;
        }

        if(t[idx] != -1){
            return t[idx];
        }
        int steal = v[idx] + Rob(v,idx+2,n,t);
        int skip = Rob(v,idx+1,n,t);

        return t[idx] = max(steal,skip);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return nums[0];
        if(n==2)return max(nums[0],nums[1]);
        vector<int>t1(101,-1);
        vector<int>t2(101,-1);
        int first = Rob(nums,0,n-1,t1);
        int second = Rob(nums,1,n,t2);
        return max(first,second);
    }
};