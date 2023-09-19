class Solution {
public:
    string removeDuplicates(string s, int k) {
        string res="";
        stack<pair<char,int>>st;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(!st.empty() && st.top().first==s[i]){
                st.top().second+=1;
                if(st.top().second==k){
                    st.pop();
                }
            }
            else{
                st.push({s[i],1});
            }          
        }
        while(!st.empty()){
            for(int i=0;i<st.top().second;i++){
                res+=st.top().first;
            }
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};