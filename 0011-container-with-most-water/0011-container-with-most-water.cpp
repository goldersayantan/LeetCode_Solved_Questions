class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp = 0;
        int rp = height.size() - 1;
        int maxArea = INT_MIN;

        while(lp < rp)  {
            int length = std::min(height[lp], height[rp]);
            int width = (rp - lp);
            int currArea = length * width;
            maxArea = std::max(maxArea, currArea);
            if(height[lp] < height[rp]) {
                lp++;
            }else   {
                rp--;
            }
        }
        return maxArea;
    }
};