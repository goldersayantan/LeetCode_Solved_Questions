class Solution {
public:
    bool isvowel(char ch)   {
        char v = tolower(ch);
        if(v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u')    {
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int start = 0;
        int end = s.length() - 1;
        while(start < end) {
            while(start < end && !isvowel(s[start]))    {
                start++;
            }
            while(start < end && !isvowel(s[end]))  {
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