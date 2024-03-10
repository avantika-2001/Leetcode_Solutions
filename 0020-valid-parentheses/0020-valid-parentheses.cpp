class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        int n=s.length();
        int i=0;
        while(i<n){
            if(st.empty()){
                if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                    st.push(s[i]);
                }
                else{
                    return false;
                }
            }
            else{
                if((s[i]==')' && st.top()=='(') || (s[i]=='}' && st.top()=='{') || (s[i]==']' && st.top()=='[')){
                    st.pop();
                }
                else{
                     st.push(s[i]);
                }
            }
            i++;
        }
        return st.empty()?true:false;
    }
};