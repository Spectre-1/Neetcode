class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map1;
        vector<int> ans;

        for (int i =0; i< nums.size(); i++)
        {
            map1[nums[i]]++;
        }
        vector<pair<int, int>> pairs(map1.begin(), map1.end());

        sort(pairs.begin(), pairs.end(), 
          [](const pair<char, int>& a, const pair<char, int>& b) -> bool {
              return a.second > b.second; 
          });

          for(int i =0; i <k ; i++)
          {
            ans.push_back(pairs[i].first);
          }

        return ans;
    }
};

// runtime: o(nlogn)
// space: o(n)