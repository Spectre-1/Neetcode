class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> map1;

        for(int i =0; i< nums.size(); i++)
        {
            map1[nums[i]]++;
            if( map1[nums[i]] >= 2)
            {
                return true;
            }
        }

        return false;
    }
};

// Runtime: O(n)
// Space: O(n)