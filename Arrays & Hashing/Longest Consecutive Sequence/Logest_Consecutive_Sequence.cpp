class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int Global_max = INT_MIN;
        int Local_max = 1;

        if(nums.size() == 0)
        {
            return 0;
        }

        if(nums.size() == 1)
        {
            return 1;
        }

        for (int i =0; i<nums.size()-1; i++)
        {
            if(nums[i] +1 == nums[i+1])
            {
                Local_max ++;
            }
            else if (nums[i] != nums[i+1])
            {
                Local_max = 1;
            }

            Global_max = max(Global_max, Local_max);

        }

        return Global_max;
    }
};


// Invalid solution: Exceeds runtime limit

// Runtime: O(log(n)n)