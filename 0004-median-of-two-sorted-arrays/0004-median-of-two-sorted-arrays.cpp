class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for (auto it : nums2){
            nums1.push_back(it);
        }

        sort(nums1.begin(), nums1.end());

        if (nums1.size()%2 != 0){
            return nums1[nums1.size()/2];
        } 

        double firstMid = nums1[(nums1.size()/2)-1];
        double secondMid = nums1[(nums1.size()/2)];

        return (firstMid + secondMid) / 2;

    }
};