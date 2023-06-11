class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int counter=0;
        int element=nums[0];
        for(int i=0; i<nums.size(); i++){
            if(counter==0){
                element = nums[i];
            }
            
            if(element==nums[i]){
                counter++;
            }
            else{
                counter--;
            }
        }
        return element;
    }
};
