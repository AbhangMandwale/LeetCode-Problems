class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size();
        int mid;

        if (target>nums[high-1]){
          return high; //if the target number is greater than the last digit in the array
        }
        
        while (low<=high){
          mid = (low+high)/2;
          if (nums[mid]==target){
            return mid;
          }
          if (target>nums[mid]){ //if the target number is greater than middle of high and low, we will ignore the left half
            low = mid+1;
          }
          else{ //if the target number is less than middle of high and low, we will ignore the right half
            high = mid-1;
          }
        }
        return low;
    }
};
