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

// Created a hashmap to store the frequency of each element in the array
// Loop through the vector and check if the frequency of the element is greater than or equal to 2
// If it is, return true
// Else, return false

// Runtime: O(n)
// Space: O(n)