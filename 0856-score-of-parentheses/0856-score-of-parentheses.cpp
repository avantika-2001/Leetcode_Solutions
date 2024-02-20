class Solution {
public:
    int scoreOfParentheses(string s) {
        int n=s.length();
        stack<int>st;
        int prev=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(prev);
                prev=0;
            }
            else{
                prev=st.top()+max(2*prev,1);
                st.pop();
            }
        }
        return prev;
    }
};