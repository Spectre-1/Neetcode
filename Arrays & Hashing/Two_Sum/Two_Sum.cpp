class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map1;

        for (int i =0; i< nums.size(); i++)
        {
            int complement = target - nums[i];
            if(map1.find(complement) != map1.end())
            {
                return {i,map1[complement]};
            }
            map1[nums[i]] = i;
        }
        return {-1,-1};
    }
};