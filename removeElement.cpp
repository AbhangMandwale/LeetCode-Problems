class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0; //keeping count of element that are different
        for (int i=0; i<nums.size(); i++){
            if (nums[i]!=val){ //checking values that are not the same as the value
                nums[count++]=nums[i]; //updating the array with values excluding the value
            }
        }
        return count;
    }
};
