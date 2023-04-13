class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n=pushed.size();
        int i=0,j=0;
        stack<int>s;
        while(i<n){
            s.push(pushed[i]);
            i++;
            while(!s.empty() && s.top()==popped[j] && j<n){
                s.pop();
                j++;
            }
        }
        return s.empty();
    }
};