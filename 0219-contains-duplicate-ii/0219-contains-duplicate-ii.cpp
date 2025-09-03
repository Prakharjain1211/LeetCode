class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> indexMap; // value → last index

    for (int i = 0; i < nums.size(); ++i) {
        int val = nums[i];

        if (indexMap.count(val)) {
            if (i - indexMap[val] <= k) {
                return true; // Found a valid duplicate within range
            }
        }

        indexMap[val] = i; // Update last seen index
    }

    return false;


    }
};