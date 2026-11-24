class Solution {
public:
    int maxLength(vector<int>& nums) {
        int mx = 0;
        for(int i=0; i<nums.size(); i++){
            long long  p  = 1;
            int g = 0;
            int l = 1;
            for(int j = i; j<nums.size();j++){
                g  = gcd(g,nums[j]);
                l = lcm(l,nums[j]);
                if (p > LLONG_MAX / nums[j])
                    break;
                p *= nums[j];
                if(p == 1LL*g*l){
                    mx = max(mx,j-i+1);
                }
            }
        }
        return mx;
    }
};