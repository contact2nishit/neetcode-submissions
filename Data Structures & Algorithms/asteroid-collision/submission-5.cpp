class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for (int i = 0; i < asteroids.size(); ++i) {
            if (asteroids[i] > 0) {
                st.push(asteroids[i]);
            } else {
                if (st.empty() || st.top() < 0) {
                    st.push(asteroids[i]);
                    continue;
                }
                if (!st.empty() && st.top() == abs(asteroids[i])) {
                    st.pop();
                    continue;
                }
                while (!st.empty() && st.top() <= abs(asteroids[i])) {
                    if (st.top() < 0) {
                        st.push(asteroids[i]);
                        break;
                    }
                    if (st.top() == abs(asteroids[i])) {
                        st.pop();
                        break;
                    }
                    st.pop();
                    if (st.empty()) {
                        st.push(asteroids[i]);
                        break;
                    }
                }
            }
        }
        vector<int> res;
        while (!st.empty()) {
            res.push_back(st.top());
            st.pop();
        }
        std::reverse(res.begin(), res.end());
        return res;
    }
};