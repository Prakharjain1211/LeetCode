class Solution {
public:
    int countGoodSubstrings(string s) {
        int l=0;int r=3;int len = s.length();
        int count=0;
        while(r<=len)
        {
            unordered_map<char, int> myMap;
            bool dist = true;
            for(int i=l;i<r;i++)
            {
              if(myMap.find(s[i])  != myMap.end())  
              {
                dist = false;
                break;
              } 
               myMap[s[i]] = 1;               
            }
            if(dist == true)
            {
                count++;
            }
           l++;
           r++;
        }
        return count;
    }
};