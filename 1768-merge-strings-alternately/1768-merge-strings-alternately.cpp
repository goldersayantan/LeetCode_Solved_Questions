class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l1 = 0;
        int l2 = 0;
        string newWord;
        while(l1 != word1.length() && l2 != word2.length())  {
            newWord = newWord + word1[l1] + word2[l2];
            l1++;
            l2++;
        }
        if(l1 == word1.length())    {
            newWord += word2.substr(l2);
        }
        if(l2 == word2.length())  {
            newWord += word1.substr(l1);
        }
        return newWord;
    }
};