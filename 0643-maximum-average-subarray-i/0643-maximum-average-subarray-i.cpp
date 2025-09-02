class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg;
        double sum = 0;

        for(int i=0; i<k; i++)
        {
            sum = sum + nums[i];
        }
        avg = sum/k;
        for(int i=k;i<nums.size();i++)
        {
            sum = sum + nums[i] - nums[i-k];
            avg = max(avg, sum/k);
        }

        return avg;
    }
};