class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        vector<int> ans;
        unordered_set<int> seen;
        if(nums.size() == 0){
            return 0;
        };
        
        for(int num : nums){
            if(!(seen.find(num) != seen.end())){
                seen.insert(num);
                ans.push_back(num);
            }
        }
        sort(ans.begin(), ans.end());
        int longest = 1;
        int current = 1;
        for (int i = 1; i < ans.size(); i++){
            if(ans[i] == ans[i -1] + 1){
                current++;
            }
            else{
                longest = max(longest, current);
                current = 1;
            }
        }
        longest = max(longest, current);
        return longest;
    }
};
