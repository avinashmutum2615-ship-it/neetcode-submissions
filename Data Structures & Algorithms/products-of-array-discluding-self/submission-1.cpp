class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 1);
        int prefix = 1;
        for(int i = 0; i < nums.size(); i++){
            ans[i] = prefix;
            prefix *= nums[i];
        }
        int sufix = 1;
        for(int j = nums.size() - 1; j >= 0; j--){
            ans[j] *= sufix;
            sufix *= nums[j];
        }
        return ans;
    }
};
