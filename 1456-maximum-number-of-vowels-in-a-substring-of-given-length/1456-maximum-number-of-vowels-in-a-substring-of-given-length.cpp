class Solution {
public:
    bool isVowel(char ch)   {
        char v = tolower(ch);
        if(v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u')    {
            return true;
        }
        return false;
    }

    int maxVowels(string s, int k) {
        int vowelCount = 0;
        for(int i = 0; i < k; i++)  {
            if(isVowel(s[i]))   {
                vowelCount++;
            }
        }

        int maxVowelCount = vowelCount;

        for(int i = 1; i <= (s.length() - k); i++) {
            if(isVowel(s[i - 1]))   {
                vowelCount--;
            }
            if(isVowel(s[i + k - 1]))   {
                vowelCount++;
            }
            maxVowelCount = std::max(maxVowelCount, vowelCount);
        }
        return maxVowelCount;
    }
};