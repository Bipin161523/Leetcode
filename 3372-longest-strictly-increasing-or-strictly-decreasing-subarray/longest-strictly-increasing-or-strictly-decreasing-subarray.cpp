class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans1 = 1;
        int ans2 = 1;
        int count1=1;
        int count2=1;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]<nums[i+1]){
                count1++;
                ans1=max(ans1,count1);
            }else{
                count1=1;
            }
        }
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]>nums[i+1]){
                count2++;
                ans2=max(ans2,count2);
            }else{
                count2=1;
            }
        }
        return max(ans1,ans2);
    }
};