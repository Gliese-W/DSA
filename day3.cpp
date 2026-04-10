#include <iostream>
#include <vector>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
        int i = 0; 
        int j = nums.size()-1;

        vector<int> temp(nums.size());
        int index = temp.size()-1;
        while (i<=j){
            if (nums[i] * nums[i] > nums[j]*nums[j]){
                temp[index--] = nums[i]*nums[i];
                i++;
            } else {
                temp[index--] = nums[j]*nums[j];
                j--;
            }
        }
  return temp;
}

int main(){
  vector<int> nums = {-4,-1,0,3,10};
  vector<int> result = sortedSquares(nums);
  for (int x : result) {
        cout << x << " ";
    }
  return 0;
}

