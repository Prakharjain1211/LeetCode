class Solution {
public:
    int minimumRecolors(string blocks, int k) {
       int minOps = INT_MAX;
    int whiteCount = 0;


    for (int i = 0; i < k; ++i) {
        if (blocks[i] == 'W') whiteCount++;
    }
    minOps = whiteCount;


    for (int i = k; i < blocks.size(); ++i) {
        if (blocks[i - k] == 'W') whiteCount--;  // Remove leftmost
        if (blocks[i] == 'W') whiteCount++;      // Add new rightmost
        minOps = min(minOps, whiteCount);
    }

    return minOps;

    }
};