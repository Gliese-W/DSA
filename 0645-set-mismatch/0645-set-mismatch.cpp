class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        unordered_map<int, int> mpp;

        for (int i=1; i<=nums.size(); i++){
            mpp[i] = 0;
        }

        for (auto it : nums){
            mpp[it] ++;
        }

        int dup = -1, missing = -1;
        for (auto it : mpp){
            if (it.second == 2){
                dup = it.first;
            } else if (it.second == 0){
                missing = it.first;
            }
        }

        return {dup, missing};





        // int dup = -1;
        // int missing = -1;

        // for (int i=1; i<=nums.size(); i++){
        //     int count = 0;
        //     for (int j=0; j<nums.size(); j++){
        //         if (nums[j] == i){
        //             count ++;
        //         }
        //     }

        //     if (count == 2){
        //         dup = i;
        //     }else if (count == 0){
        //         missing = i;
        //     }
        // }

        // return {dup, missing};
    }
};