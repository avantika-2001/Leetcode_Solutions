class Solution {
public:
    string removeStars(string s) {
        int n=s.length();
        stack<char>st;
        string str;
        for(int i=0;i<n;i++){
            if(s[i]!='*'){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};