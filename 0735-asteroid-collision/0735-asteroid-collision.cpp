class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int i = 0; i < asteroids.size(); i++) {
            bool alive = true;

            while (!st.empty() && st.top() > 0 && asteroids[i] < 0) {
                if (st.top() < abs(asteroids[i])) {
                    st.pop();
                }
                else if (st.top() == abs(asteroids[i])) {
                    st.pop();
                    alive = false;
                    break;
                }
                else {
                    alive = false;
                    break;
                }
            }

            if (alive) {
                st.push(asteroids[i]);
            }
        }

        vector<int> answer;

        while (!st.empty()) {
            answer.push_back(st.top());
            st.pop();
        }
        reverse(answer.begin(), answer.end());
        return answer;
    }
};