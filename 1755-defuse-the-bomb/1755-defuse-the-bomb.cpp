class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> result(n, 0);  
      
       
        if (k == 0) {
            return result;
        }
            
        for (int i = 0; i < n; ++i) {
            if (k > 0) {
               
                for (int j = i + 1; j <= i + k; ++j) {
                    result[i] += code[j % n];  
                }
            } else {
                
                for (int j = i + k; j < i; ++j) {
                    result[i] += code[(j % n + n) % n];  
                }
            }
        }
      
        return result;
    }
};