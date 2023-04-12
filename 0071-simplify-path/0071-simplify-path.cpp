class Solution {
public:
    string simplifyPath(string path) {
        int n=path.length();
        stack<string>st;
        string r="";
        for(int i=0;i<n;i++){
            if(path[i]=='/')
                continue;
            string str="";
            while(path[i]!='/' && i<n){
                str+=path[i];
                i++;
            }
            if(str=="."){
                continue;
            }
            else if(str==".."){
                if(!st.empty()){
                    st.pop();
                }
            }
            else
                st.push(str);
        }
        while(!st.empty()){
            r="/"+st.top()+r;
            st.pop();
        }
        if(r.size()==0)
            return "/";
        return r;
    }
};