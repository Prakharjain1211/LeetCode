class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1;
        stack<char>st2;

        for(char x:s)
        {
            if(x != '#') 
                st1.push(x);
             else if (!st1.empty())   
                st1.pop();
        }
        for(char x:t)
        {
            if(x != '#') 
                st2.push(x);
           else if (!st2.empty())   
                st2.pop();
        }

        // if(st1.size() == st2.size())
        // {
        //     while(!st1.empty())
        //     {
        //         if(st1.top() == st2.top())
        //         {
        //             st1.pop();
        //             st2.pop();
        //         }
        //         else
        //         return false;
        //     }
        //     return true;
        // }
        // return false;
        return st1==st2;
    }
};