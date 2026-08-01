class Solution {
public:

    string encode(vector<string>& strs) {
      string encode = "";
      for(string word : strs){
        encode += to_string(word.size()) + "#" + word;
      }
      return encode;
    }

    vector<string> decode(string s) {
     vector<string> ans;
     int i = 0;
     while(i < s.size()){
        int j = i;
        while(s[j] != '#'){
            j++;
        }
        string len = s.substr(i, j);
        int length = stoi(len);
        ans.push_back(s.substr(j + 1, length));
        i = j + 1 + length;
     }
     return ans;
    }
};
