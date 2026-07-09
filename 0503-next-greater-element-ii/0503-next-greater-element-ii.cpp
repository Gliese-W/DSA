class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {


        vector<int> nge(nums.size());
        stack<int> st;

        for (int i=2*nums.size()-1; i>=0; i--){

            while (!st.empty() && st.top() <= nums[i%nums.size()]){
                st.pop();
            }

            if (i<nums.size()){

                nge[i] = st.empty() ? -1 : st.top();

                // if (st.empty()){
                //     nge.push_back(-1);
                // } else{
                //     nge.push_back(st.top());
                // }
            }
            st.push(nums[i%nums.size()]);
        }

        return nge;




        // vector<int> nge;

        // int N = nums.size();
        // for (int i=0; i<nums.size(); i++){
        //     bool flag = 0;
        //     for (int j=i+1; j <= i+N-1; j++){
        //         int ind = j % N;
        //         if (nums[ind] > nums[i]){
        //             nge.push_back(nums[ind]);
        //             flag = 1;
        //             break;
        //         }
        //     }

        //     if (flag == 0){
        //         nge.push_back(-1);
        //     }
        // }

        // return nge;







        // vector<int> nge;

        // for (int i=0; i<nums.size(); i++){

        //     bool flag = 0;

        //     for (int j=i+1; j<nums.size(); j++){
        //         if (nums[j] > nums[i]){
        //             nge.push_back(nums[j]);
        //             flag = 1;
        //             break;
        //         }
        //     }
            
        //     if (!flag) {
        //         for (int k=0; k<i; k++){
        //             if (nums[k] > nums[i]){
        //                 nge.push_back(nums[k]);
        //                 flag = 1;
        //                 break;
        //             }
        //         }
        //     }

        //     if (!flag){
        //         nge.push_back(-1);
        //     }
        // }
        // return nge;
    }
};