class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        int prefixSum = 0;
        for(int i = 0; i < nums.size(); i++)    {
            totalSum += nums[i];
        }

        for(int i = 0; i < nums.size(); i++)    {
            int suffixSum = totalSum - prefixSum - nums[i];
            if(prefixSum == suffixSum)    {
                return i;
            }
            prefixSum += nums[i];
        }
        return -1;
    }
};