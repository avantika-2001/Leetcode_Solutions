class Solution {
public:
    string removeStars(string s) {
        int n=s.length();
        stack<char>st;
        string r="";
        for(int i=0;i<n;i++){
            if(s[i]!='*')
                st.push(s[i]);
            else{
                if(!st.empty()){
                    st.pop();                    
                }
            }
        }
        while(!st.empty()){
            r+=st.top();
            st.pop();
        }
        reverse(r.begin(),r.end());
        return r;
    }
};