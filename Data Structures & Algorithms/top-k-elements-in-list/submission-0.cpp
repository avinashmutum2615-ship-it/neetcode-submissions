class Solution {
public:
   static bool compare(pair<int, int> a, pair<int, int> b){
    return a.second > b.second;
   }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int num : nums){
            freq[num]++;
        }
        vector<pair<int, int>> v;
        for(auto p : freq){
            v.push_back({p.first, p.second});
        };
        sort(v.begin(), v.end(), compare);

        vector<int> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(v[i].first);
        }
        return ans;
        
    };
};
