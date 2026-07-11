class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {

        long long total = 0;
        for(int i=0; i<nums.size(); i++){
            int s = INT_MAX;
            int l = INT_MIN;
            for(int j=i; j<nums.size(); j++){
                if (nums[j]>l){
                    l = nums[j];
                }
                if (nums[j]<s){
                    s = nums[j];
                }
                total += l-s;
            }
        }
        return total;








        // method 01 - O(n^3)  ;(


        // long long total = 0;
        // for(int i=0; i<nums.size(); i++){
        //     for(int j=i; j<nums.size(); j++){
        //         int s = INT_MAX;
        //         int l = INT_MIN;
        //         for(int k=i; k<=j; k++){
        //             if (nums[k]>l){
        //                 l = nums[k];
        //             }
        //             if (nums[k]<s){
        //                 s = nums[k];
        //             }
        //         }
        //         total += l-s;
        //     }
        // }
        // return total;
    }
};