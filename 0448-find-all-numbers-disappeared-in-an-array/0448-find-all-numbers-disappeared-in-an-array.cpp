class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        unordered_map<int, int> mpp;
        vector<int> ans;

        for (int i=1; i<=nums.size(); i++){
            mpp[i] = 0;
        }

        for (auto it : nums){
            mpp[it] ++;
        }

        for (auto it : mpp){
            if (it.second == 0){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};