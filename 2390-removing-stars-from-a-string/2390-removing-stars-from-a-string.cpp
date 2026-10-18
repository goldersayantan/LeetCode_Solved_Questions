class Solution {
public:
    string removeStars(string s) {
        stack <int> st;
        for(int i = 0; i < s.size(); i++)   {
            if(s[i] == '*') {
                st.pop();
            }else   {
                st.push(s[i]);
            }
        }

        s = "";

        while(!st.empty())  {
            s += st.top();
            st.pop();
        }
        std::reverse(s.begin(), s.end());
        return s;
    }
};