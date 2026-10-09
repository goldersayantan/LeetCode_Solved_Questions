class Solution {
public:
    int compress(vector<char>& chars) {
        string s = "";
        s += chars[0];
        int place_tracker = 0;
        for (int i = 1; i < chars.size(); i++) {
            if (s[0] == chars[i]) {
                s += chars[i];
            } else {
                chars[place_tracker++] = s[0];
                if (s.length() > 1) {
                    string cnt = to_string(s.length());
                    for (char c : cnt) {
                        chars[place_tracker++] = c;
                    }
                }
                s = "";
                s += chars[i];
            }
        }
        chars[place_tracker++] = s[0];
        if (s.length() > 1) {
            string cnt = to_string(s.length());
            for (char c : cnt) {
                chars[place_tracker++] = c;
            }
        }
        return place_tracker;
    }
};