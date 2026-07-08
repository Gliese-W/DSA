class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        stack<int> st;
        vector<int> nge;

        unordered_map<int, int> mp;


        for (int j=nums2.size()-1; j>=0; j--){

            while (!st.empty() && st.top() <= nums2[j]){
                st.pop();
            } 

            if (st.empty()){
                mp[nums2[j]] = -1;
            } else{
                mp[nums2[j]] = st.top();
            }

            st.push(nums2[j]);
        }

        for (auto ele : nums1){
            nge.push_back(mp[ele]);
        }
        

        return nge;






        // vector<int> st;

        // int i=0, j=0;
        

        // while (i<nums1.size()){
        //     bool flag = 0;
        //     while(j<nums2.size()){
        //         if (nums1[i] != nums2[j]){
        //             j++;
        //         }else{
        //             for (int k=j+1; k<nums2.size(); k++){
        //                 if (nums2[k]>nums2[j]){
        //                     st.push_back(nums2[k]);
        //                     flag=1;
        //                     break;
        //                 } 
        //             }

        //             if(!flag){
        //                 st.push_back(-1);
        //                 flag = 1;
        //             }
        //         }

        //         if(flag==1) break;
        //     }
        //     j=0;
        //     i++;
        // }

        // return st;

    }
};