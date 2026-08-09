class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;

        int i = 1;
        int j = n;

        ans.push_back(nums[0]);

        while (j<nums.size()-1){
            ans.push_back(nums[j]);
            ans.push_back(nums[i]);
            i++;
            j++;
        }

        ans.push_back(nums[nums.size()-1]);

        return ans;
    }
};