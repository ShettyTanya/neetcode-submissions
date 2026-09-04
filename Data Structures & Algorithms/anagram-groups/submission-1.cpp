class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> res;
        for(string s:strs){
            string sorteds=s;
            sort(sorteds.begin(),sorteds.end());
            res[sorteds].push_back(s);
        }
        vector<vector<string>> result;
        for (auto& x:res){
            result.push_back(x.second);
        }
        return result;
    }
};
