class Solution {
public:
    void sol(string empty, int open, int close, vector<string> &ans){
        if(open==0 && close==0){ //no more brackets left
            ans.push_back(empty);
            return;
        }

        if(open==close){ //we can only append '(' if both no. of open and close brackets are same
            string op = empty;
            op.push_back('(');
            sol(op, open-1, close, ans);
        }
        else if(open==0){ //we can only append ')' if open brackets are over
            string op = empty;
            op.push_back(')');
            sol(op, open, close-1, ans);
        }
        else{ //appending either '(' or ')' in remaining cases
            string op1 = empty;
            string op2 = empty;
            op1.push_back('(');
            op2.push_back(')');
            sol(op1, open-1, close, ans);
            sol(op2, open, close-1, ans);
        }
    }

    vector<string> generateParenthesis(int n) {
        int open = n;
        int close = n;
        string empty = "";
        vector<string> ans;
        sol(empty, open, close, ans);
        return ans;
    }
};
