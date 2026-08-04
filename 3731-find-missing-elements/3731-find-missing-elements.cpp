class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        int maxNum = INT_MIN;
        int minNum = INT_MAX;

        for(int i=0; i<nums.size(); i++){
            maxNum = max(maxNum, nums[i]);
            minNum = min(minNum, nums[i]);
        }

        sort(nums.begin(), nums.end());

        vector<int> ans;

        int j = 0;
        for (int i=minNum; i<=maxNum; i++){
            if (i != nums[j]){
                ans.push_back(i);
            }else{
                j++;
            }
        }

        return ans;

    }
};