class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int it = 0;
        int oneCount = 0;
        int longestOneCount = 0;
        int left = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                oneCount++;
            } else {
                it++;

                while (it > k) {
                    if (nums[left] == 0) {
                        it--;
                    }
                    left++;
                    oneCount--;
                }
                oneCount++;
            }
            longestOneCount = max(longestOneCount, oneCount);
        }
        return longestOneCount;
    }
};