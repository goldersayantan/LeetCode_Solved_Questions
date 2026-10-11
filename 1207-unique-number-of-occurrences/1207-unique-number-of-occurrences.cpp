class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map <int, int> mp;
        for(int i = 0; i < arr.size(); i++) {
            if(mp.find(arr[i]) != mp.end()) {
                mp[arr[i]]++;
            }else   {
                mp[arr[i]] = 1;
            }
        }

        unordered_set <int> st;

        for(const auto& [key, value] : mp)  {
            if(st.find(value) != st.end())   {
                return false;
            }
            st.insert(value);
        }
        return true;
    }
};