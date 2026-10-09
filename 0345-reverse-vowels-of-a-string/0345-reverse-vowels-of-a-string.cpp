class Solution {
public:
    bool isVowel(char ch)  {
        char v = tolower(ch);
        if(v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u')    {
            return true;
        }
        return false;
    }

    string reverseVowels(string s) {
        int start = 0;
        int end = s.length() - 1;
        while(start < end)  {
            while((start < end) && (!isVowel(s[start])))    {
                start++;
            }
            while((start < end) && (!isVowel(s[end])))    {
                end--;
            }
            if(start < end)  {
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }
        return s;
    }
};