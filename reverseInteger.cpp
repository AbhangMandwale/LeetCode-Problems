class Solution {
public:
    int reverse(int x) {
        int med, sol=0;
        med = x/100;
        sol += med;
        x -= med*100;
        med = x/10;
        sol += med*10;
        x -= med*10;
        sol += x*100;

        return sol;
        
    }
};
