class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int max = *max_element(candies.begin(),candies.end());
        for(int i=0; i<candies.size(); i++){
            result.push_back(candies[i]+extraCandies>=max);
        }
        return result;
    }
};
