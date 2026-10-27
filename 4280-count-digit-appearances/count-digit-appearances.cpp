class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            do{
                if(digit == nums[i]%10){
                    count++;
                }
                nums[i]/=10;
            }while(nums[i]>0);
        }
        return count;
    }
};