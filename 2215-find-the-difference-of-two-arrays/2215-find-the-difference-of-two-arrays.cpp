
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        vector<vector<int>> answer;
        unordered_set<int> temp;

        for(int i = 0; i < nums2.size(); i++) {
            mp[nums2[i]] = 1;
        }

        for(int i = 0; i < nums1.size(); i++) {
            if(mp.find(nums1[i]) == mp.end()) {
                temp.insert(nums1[i]);
            }
        }

        answer.push_back(vector<int>(temp.begin(), temp.end()));
        temp.clear();
        mp.clear();

        for(int i = 0; i < nums1.size(); i++) {
            mp[nums1[i]] = 1;
        }

        for(int i = 0; i < nums2.size(); i++) {
            if(mp.find(nums2[i]) == mp.end()) {
                temp.insert(nums2[i]);
            }
        }

        answer.push_back(vector<int>(temp.begin(), temp.end()));
        return answer;
    }
};