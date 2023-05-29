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
// Created a vector of vector of strings to store ans
// Created a hashmap to store the sorted string as key and the vector of strings as value
// Loop through the vector of strings
// Sort the string
// Push the string into the hashmap
// Loop through the hashmap and push the vector of strings into the ans
// Return ans

// runtime: o(nklogk)
// space: o(nk)