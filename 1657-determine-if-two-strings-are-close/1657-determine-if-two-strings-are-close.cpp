class Solution {
public:
    bool closeStrings(string word1, string word2) {
        // (same characters but different frequency -> true)

        if(word1.size() != word2.size()) {
            return false;
        }

        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;

        for(int i = 0; i < word1.size(); i++) {
            mp1[word1[i]]++;
        }

        for(int i = 0; i < word2.size(); i++) {
            mp2[word2[i]]++;
        }

        for(const auto& [key, value] : mp1) {
            if(mp2.find(key) == mp2.end())  {
                return false;
            }
        }

        vector <int> freq1;
        vector <int> freq2;

        for(const auto& [key, value] : mp1) {
            freq1.push_back(value);
        }

        for(const auto& [key, value] : mp2) {
            freq2.push_back(value);
        }

        std::sort(freq1.begin(), freq1.end());
        std::sort(freq2.begin(), freq2.end());

        if(freq1 == freq2)  {
            return true;
        }
        return false;
    }
};