class Solution {
public:
    int firstUniqChar(string arr) {
        unordered_map<int,int>ele;
        for(int i=0;i<arr.length();i++)
        {
            ele[arr[i]]++;
        }        
        
        for(int i=0;i<arr.length();i++)
        {
            int key =arr[i];
            auto temp = ele.find(key);
                if(temp->second ==1)
                return i;
        }
        return -1;
    }
};