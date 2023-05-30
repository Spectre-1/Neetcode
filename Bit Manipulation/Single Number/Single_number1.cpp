class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> map1;

        for (auto x: nums)
        {
            map1[x]++;
        }

        for (auto x: map1)
        {
            if(x.second == 1)
            {
                return x.first;
            }
        }
        return -1;
    }
};

// Not constant space
// Space: o(n)
// Runtime: o(n)

