class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int num : nums){
            mp[num]++;
        }
        int t = nums.size()/3;
        vector<int>ans;
        for(auto i : mp){
            if(i.second > t){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};