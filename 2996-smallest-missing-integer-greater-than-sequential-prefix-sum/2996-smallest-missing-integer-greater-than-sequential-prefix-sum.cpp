class Solution {
public:
    int missingInteger(vector<int>& nums) {

        int sum = nums[0];
        for (int i=1; i<nums.size(); i++){
            sum += nums[i];
            if (nums[i]-1 != nums[i-1]){
                sum -= nums[i];
                break;
            }
        }

        int check = sum;

        while (true){
            bool flag = 0;
            for (int i=0; i<nums.size(); i++){
                if (check == nums[i]){
                    flag = true;
                    break;
                }
            }

            if (!flag){
                return check;
            }

            check ++;
        }

        return check;




        // Wrong appraoch below 

        // int Sum = 0;
        // int maxSum = 0;
        // for (int i=nums.size()-1; i>0; i--){
        //     if (nums[i]-1 == nums[i-1]){
        //         Sum += nums[i];
        //         maxSum = max(maxSum, Sum);
        //     } else{
        //         maxSum = max(maxSum, Sum);
        //         Sum = 0;
        //     }
        // }
        // if (nums[0]+1 == nums[1]){
        //     maxSum += nums[0];
        // }

        // for(int i=0; i<nums.size(); i++){
        //     if (nums[i]>maxSum){
        //         maxSum = nums[i];
        //     }
        // }
        // return maxSum;
    }
};