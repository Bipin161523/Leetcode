class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& locked, int k) {
        int n = nums.size();
        vector<bool>arr(n);
        int count1 = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i] > nums[j]){
                    arr[i] = true;
                    arr[j] = true;
                    count1++;
                }
            }
        }
        int count2 = 0;
        for(int i=0;i<n;i++){
            if(arr[i] && locked[i]==1){
                count2++;
            }
        }
        if(count2 > k){
            return -1;
        }
        return count1 + count2;
    }
};