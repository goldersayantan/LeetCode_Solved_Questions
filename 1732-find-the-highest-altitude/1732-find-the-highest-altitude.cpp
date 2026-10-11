class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highestAltitude = 0;
        int presentAltitude = 0;
        for(int i = 0; i < gain.size(); i++)    {
            presentAltitude += gain[i];
            highestAltitude = std::max(highestAltitude, presentAltitude);
        }
        return highestAltitude;
    }
};