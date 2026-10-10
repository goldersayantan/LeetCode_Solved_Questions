class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int lp = 0;
        int rp = nums.size() - 1;
        int operationCount = 0;

        while(lp < rp)  {
            int sum = nums[lp] + nums[rp];
            if(sum == k)    {
                lp++;
                rp--;
                operationCount++;
            }else if(sum < k)   {
                lp++;
            }else   {
                rp--;
            }
        }
        return operationCount;
    }
};