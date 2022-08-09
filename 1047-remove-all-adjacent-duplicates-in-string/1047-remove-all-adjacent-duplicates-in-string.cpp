class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>ans;
        int i=0;
        int n= s.size();
        while(i<n)
        {
            if(ans.empty() || ans.top()!=s[i])
            {
                ans.push(s[i]);
            }
            else
            {
                ans.pop();
            }
            i++;
        }
        string a="";
        while(!ans.empty())
        {
            char element=ans.top();
            ans.pop();
            a+=element;
        }
        reverse(a.begin(),a.end());
        return a;
    }
};