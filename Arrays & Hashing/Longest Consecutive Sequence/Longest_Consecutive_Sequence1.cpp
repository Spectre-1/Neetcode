class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> set1;

        for(auto x: nums)
        {
            set1.insert(x);
        }

        // Kadanes Algo

        int Global_max = INT_MIN;
        int Local_max = 1;

        if(set1.size() == 1)
        return 1;

        if(set1.size() == 0)
        return 0;

        for (auto x: set1)
        {
            if(set1.find(x-1) == set1.end())
            {
                Local_max =1;

                while (set1.find(x+1) != set1.end())
                {
                    x++;
                    Local_max++;
                }
            }
            Global_max  = max(Local_max, Global_max);
        }

        return Global_max;
    }
};

// Runtime: O(n)
// Better to use unordeded set since we dont care about the order of the elements
