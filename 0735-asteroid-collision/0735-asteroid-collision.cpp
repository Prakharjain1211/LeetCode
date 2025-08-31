class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        vector<int> result;
        for (int x : asteroids)
        { 
            bool destroyed = false;
            while (!st.empty() && x < 0 && st.top() > 0) {
            if (abs(st.top()) < abs(x)) {
                st.pop(); 
                continue; 
            } else if (abs(st.top()) == abs(x)) {
                st.pop();
            }
            destroyed = true;
            break;
        }
        if (!destroyed) st.push(x);
        }
    while(!st.empty()){
        result.push_back(st.top());
        st.pop();
    }
    reverse(result.begin(),result.end());
    return result; 
    }
};