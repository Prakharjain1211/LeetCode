class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
       
        for(const string& c : operations)
        {
            if(c =="C")
            {                
                 st.pop();
            }
            else if(c=="D")
            {                
                st.push(2*st.top());
            }
            
            else if (c == "+")
            {
                int top1 = st.top();st.pop();
                int top2 = st.top();
                st.push(top1);
                st.push(top1+top2);
            }
            else {
                st.push(stoi(c));
            }
        }
        int sum = 0;
        while(!st.empty()){
            sum = sum + st.top();
            st.pop();
        }

        return sum;
    }
};