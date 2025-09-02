class Solution {
public:
    bool isSubsequence(string s, string t) {
        char ptr = 0;
       

        for(int i=0;i<t.length();i++)
        {
            if(s[ptr] == t[i])
            {
                ptr++;
            }
        }
           if(ptr == s.length())
            return true;
        
        return false;
    }
};