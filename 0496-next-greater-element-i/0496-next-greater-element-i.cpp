class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> st;

        int i=0, j=0;
        

        while (i<nums1.size()){
            bool flag = 0;
            while(j<nums2.size()){
                if (nums1[i] != nums2[j]){
                    j++;
                }else{
                    for (int k=j+1; k<nums2.size(); k++){
                        if (nums2[k]>nums2[j]){
                            st.push_back(nums2[k]);
                            flag=1;
                            break;
                        } 
                    }

                    if(!flag){
                        st.push_back(-1);
                        flag = 1;
                    }
                }

                if(flag==1) break;
            }
            j=0;
            i++;
        }

        return st;
    }
};