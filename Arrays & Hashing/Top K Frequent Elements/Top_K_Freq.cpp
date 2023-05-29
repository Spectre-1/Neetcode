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

// Created a vector of ints to store ans
// Created a hashmap to store the frequency of each element in the array
// Created a vector of pairs to store the key and value of the hashmap
// Sorted the vector of pairs in descending order
// Loop through the vector of pairs and push the first k elements into the ans
// Return ans

// runtime: o(nlogn)
// space: o(n)