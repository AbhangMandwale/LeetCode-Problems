class Solution {
public:
    int newNum(int n){
        int newN = 0;
        while(n!=0){
            int num = n%10;
            newN += num*num;
            n=n/10;
        }
        return newN;
    }

    bool isHappy(int n) {
        unordered_set<int> set;
        while(n!=1 && !set.count(n)){
            set.insert(n);
            n=newNum(n);
        }
        return n==1;
    }
};
