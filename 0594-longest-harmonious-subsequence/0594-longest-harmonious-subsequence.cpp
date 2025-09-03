class Solution {
public:
    int findLHS(vector<int>& nums) {

         unordered_map<int, int> frequencyMap;
      
        for (int num : nums) {
            ++frequencyMap[num];
        }
      
        int maxLength = 0;
      
        for (auto& [number, frequency] : frequencyMap) {
            if (frequencyMap.contains(number + 1)) {
                maxLength = max(maxLength, frequency + frequencyMap[number + 1]);
            }
        }
      
        return maxLength;
    
     }
      
};