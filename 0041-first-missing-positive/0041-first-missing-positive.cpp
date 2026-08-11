class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int expected = 1;

        for (int i=0; i<nums.size(); i++){
            if (nums[i] <= 0){
                continue;
            }

            if (nums[i] == expected){
                expected++;
            } else if (nums[i] > expected){
                return expected;
            }
        }

        return expected;



        // sort(nums.begin(), nums.end());
        // int positiveIndex = 0;
        // int positiveNumber = 0;
        // for (int i=0; i<nums.size(); i++){
        //     if (nums[i] > 0){
        //         positiveIndex = i;
        //         positiveNumber = nums[i];
        //         break;
        //     }
        // }
        
        // if (nums[positiveIndex] != 1){
        //     return 1;
        // }

        // if (nums.size()==1 && nums[0]>=0){
        //     return 1;
        // }

        // for (int i=positiveIndex; i<=nums.size(); i++){
        //     if (nums[i] != positiveNumber){
        //         return positiveNumber;
        //     }else{
        //         positiveNumber ++;
        //     }
        // }

        // return 1;
    }
};