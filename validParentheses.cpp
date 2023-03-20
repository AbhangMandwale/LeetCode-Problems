class Solution {
public:
    bool isValid(string s) {
        stack<char> st; //creating a stack

        for (int i=0; i<s.length(); i++){
            char ch = s[i]; //taking each element from string

            if (ch=='(' || ch=='{' || ch=='['){
                st.push(ch); //pushing opening brackets
            }

            else{
                if (!st.empty()){ //checking if the stack is non empty
                    if (ch==')' && st.top()=='(' ||
                        ch=='}' && st.top()=='{' ||
                        ch==']' && st.top()=='[' ){
                            st.pop(); //popping from stack if closing bracket is detected
                    }
                    else{
                        return false; //returning false if there are no closing brackets
                    }
                }
                else{
                    return false; //if we get a closing bracket without opening brackets
                }
            }
        }

        if (st.empty()){
            return true; //returning true since there are no brackets in the stack
        }
        return 0;
    }
};
