class Solution {
public:
    int trap(vector<int>& height) {

        int start = 0;
        int end = height.size()-1;

        int leftMax = 0;
        int rightMax = 0;

        int totalWater = 0;

        while (start < end){
            leftMax = max(leftMax, height[start]);
            rightMax = max(rightMax, height[end]);

            if (leftMax < rightMax){
                totalWater += leftMax - height[start];
                start ++;
            } else{
                totalWater += rightMax - height[end];
                end--;
            }
        }
        return totalWater;










        // int water = 0;
        
        // for (int i=0; i<height.size(); i++){

            
        //     int maxLeft = height[i];
        //     for (int j=0; j<i; j++){
        //         maxLeft = max(maxLeft, height[j]);
        //     }

            
        //     int maxRight = height[i];
        //     for(int j=i+1; j<height.size(); j++){
        //         maxRight = max(maxRight, height[j]);
        //     }

        //     water += min(maxLeft, maxRight) - height[i];
        // }
        // return water;    
    }
};