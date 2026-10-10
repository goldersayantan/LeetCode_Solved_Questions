class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0;
        int zeroCount = 0;
        int longestOneCount = 0;

        for(int right = 0; right < nums.size(); right++)    {
            if(nums[right] == 0)    {
                zeroCount++;
            }

            while(zeroCount > 1)    {
                if(nums[left] == 0) {
                    zeroCount--;
                }
                left++;
            }
            longestOneCount = std::max(longestOneCount, right - left);
        }
        return longestOneCount;
    }
};