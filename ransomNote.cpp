class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> map;
        for(auto x: magazine){
            map[x]++;
        }
        for(auto x: ransomNote){
            --map[x];
            if(map[x]<0){
                return false;
            }
        }
        return true;
    }
};
