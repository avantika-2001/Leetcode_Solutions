class Solution {
public:
    void findConn(int i,vector<vector<int>>& isConnected, vector<bool>& visited){
        queue<int>q;
        q.push(i);
        visited[i]=true;
        while(!q.empty()){
            int f=q.front();
            q.pop();
            for(int i=0;i<isConnected.size();i++){
                if(isConnected[f][i] && !visited[i]){
                    q.push(i);
                    visited[i]=true;
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int cnt=0;
        int n=isConnected.size();
        vector<bool>visited(n);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                cnt++;
                findConn(i,isConnected,visited);
            }
        }
        return cnt;
    }
};