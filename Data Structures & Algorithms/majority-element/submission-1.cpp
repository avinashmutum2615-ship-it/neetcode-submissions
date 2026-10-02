class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> count;
        for(int num : nums){
            count[num]++;
        }
        for(auto pair : count){
            if(pair.second > nums.size()/2){
                return pair.first;
            }
        }
    }
};