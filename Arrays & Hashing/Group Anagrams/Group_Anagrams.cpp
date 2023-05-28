class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map <string, vector<string>> map1;

        for(int i =0; i < strs.size(); i++)
        {
            string str1 = strs[i];
            sort(str1.begin(), str1.end());
            map1[str1].push_back(strs[i]);
        }

        for(auto x: map1)
        {
            ans.push_back(x.second);
        }

        return ans;
    }
};
// runtime: o(nklogk)
// space: o(nk)