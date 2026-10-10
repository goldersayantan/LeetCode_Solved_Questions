class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_tracker = 0;
        int t_tracker = 0;
        
        while((s_tracker < s.size()) && (t_tracker < t.size())) {
            if(s[s_tracker] == t[t_tracker])    {
                s_tracker++;
            }
            t_tracker++;
        }
        if(s_tracker == s.size())   {
            return true;
        }
        return false;
    }
};