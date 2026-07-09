class Solution {
public:

    int trap(vector<int>& height) {

        int leftMax = 0, rightMax = 0, total = 0;
        int l = 0, r = height.size()-1;

        while(l<r){
            if (height[l] <= height[r]){

                if (leftMax > height[l]){
                    total += leftMax - height[l];
                } else{
                    leftMax = height[l];
                }

                l++;
            } else{

                if (height[r] < rightMax){
                    total += rightMax - height[r];
                } else{
                    rightMax = height[r];
                }
                
                r--;
            }
        }

        return total;







    // vector<int> prefixMax(vector<int>& height){

    //     vector<int> preMax(height.size());

    //     preMax[0] = height[0];
    //     for (int i=1; i<height.size(); i++){
    //         preMax[i] = max(preMax[i-1], height[i]);
    //     }

    //     return preMax;
    // }

    // vector<int> suffixMax(vector<int>& height){
    //     vector<int> sufMax(height.size());

    //     sufMax[height.size()-1] = height[height.size()-1];
    //     for (int i=height.size()-2; i>=0; i--){
    //         sufMax[i] = max(sufMax[i+1], height[i]);
    //     }

    //     return sufMax;
    // }

    // int trap(vector<int>& height) {

    //     vector<int> preMax = prefixMax(height);
    //     vector<int> sufMax = suffixMax(height);

    //     int total = 0;
    //     for (int i=0; i<height.size(); i++){

    //         int leftMax = preMax[i];
    //         int rightMax = sufMax[i];

    //         if (height[i] < leftMax && height[i] < rightMax){
    //             total += min(leftMax, rightMax) - height[i];
    //         }
    //     }
    //     return total;
    }
};