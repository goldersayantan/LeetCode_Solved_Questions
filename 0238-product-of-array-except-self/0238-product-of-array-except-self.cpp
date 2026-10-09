class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int array_size = nums.size();
        vector <int> prefix(array_size);
        vector <int> suffix(array_size);
        vector <int> answer(array_size);

        prefix[0] = 1;
        for(int i = 1; i < array_size; i++) {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }

        suffix[array_size - 1] = 1;
        for(int j = (array_size - 2); j >= 0; j--)   {
            suffix[j] = suffix[j + 1] * nums[j + 1];
        }

        for(int k = 0; k < array_size; k++) {
            answer[k] = prefix[k] * suffix[k];
        }
        return answer;
    }
};