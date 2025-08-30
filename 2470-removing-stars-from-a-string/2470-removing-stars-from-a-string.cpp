class Solution {
public:
    string removeStars(string s) {
        int n = s.size();
        stack<char> st;
        string ans= "";
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z'){
                st.push(s[i]);
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        cout<<ans;
        // string ret = reverse(ans.begin(),ans.end());
        int sz = ans.size();
        for(int i=0;i<sz/2;i++){
            char temp = ans[sz-i-1];
            ans[sz-i-1] = ans[i];
            ans[i]  = temp;
        }
        return ans;
    }
};