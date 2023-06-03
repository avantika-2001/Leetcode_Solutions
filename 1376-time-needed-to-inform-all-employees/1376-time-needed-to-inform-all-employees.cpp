class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<int>adjList[n];
        for(int i=0;i<n;i++){
            if(manager[i]!=-1){
                adjList[manager[i]].push_back(i);
            }
        }
        queue<pair<int,int>>q;
        int maxTime=INT_MIN;
        q.push(make_pair(headID,0));
        while(!q.empty()){
            pair<int,int>p=q.front();
            q.pop();
            int parent=p.first;
            int t=p.second;
            for(auto it:adjList[parent]){
                q.push(make_pair(it,t+informTime[parent]));
            }
            maxTime=max(maxTime,t);
        }
        return maxTime;
    }
};