class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long total = 0;

        for (int i=0; i<nums.size(); i++){
            int mini = nums[i];
            int maxi = nums[i];

            for (int j=i; j<nums.size(); j++){
                maxi = max(maxi, nums[j]);
                mini = min(mini, nums[j]);
                total += (maxi-mini);
            }
        }
        return total;
    }
};