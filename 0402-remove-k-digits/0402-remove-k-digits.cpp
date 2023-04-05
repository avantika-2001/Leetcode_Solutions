class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.length();
        int i=0;
        if(k==0) return num;
        if(k==n) return "0";
        stack<char>st;
        string res="";
        while(i<n){
            char curr=num[i];
            while(!st.empty() && st.top()>curr && k>0){
                st.pop();
                k--;
            }
            if(!st.empty() || curr!='0'){
                st.push(curr);
            }
            i++;            
        }
        while(!st.empty() && k!=0){
            st.pop();
            k--;
        }
        if(st.empty()) return "0";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};