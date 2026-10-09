class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int flowerbedSize = flowerbed.size();
        int flowerCount = 0;
        for(int i = 0; i < flowerbedSize; i++)   {
            if(flowerbed[i] == 0)   {
                bool emptyLeft = ((i == 0) || (flowerbed[i - 1] == 0));
                bool emptyRight = (i == flowerbedSize - 1 || flowerbed[i + 1] == 0);

                if(emptyLeft && emptyRight) {
                    flowerbed[i] = 1;
                    flowerCount++;
                }
            }
        }
        if(flowerCount >= n)    {
            return true;
        }
        return false;
    }
};