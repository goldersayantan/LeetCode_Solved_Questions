class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        string word = "";
        string ans = "";
        bool char_found = false;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] != ' ') {
                word += s[i];
                char_found = true;
            }else if(char_found)    {
                reverse(word.begin(), word.end());
                ans += ' ';
                ans += word;
                word = "";
                char_found = false;
            }
        }
        if(char_found)  {
            reverse(word.begin(), word.end());
            ans += ' ';
            ans += word;
        }
        return ans.substr(1);
    }
};