class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first_element = INT_MAX;
        int second_element = INT_MAX;

        for(int num: nums)  {
            if(num <= first_element) {
                first_element = num;
            }else if(num <= second_element)  {
                second_element = num;
            }else   {
                return true;
            }
        }
        return false;
    }
};