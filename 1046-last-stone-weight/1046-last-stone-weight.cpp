class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        if(n==1)
            return stones[0];
        priority_queue<int>pq;
        for(int i=0;i<n;i++)
        {
            pq.push(stones[i]);
        }
        while(pq.size()!=0)
        {
            int max1=pq.top();
            pq.pop();
            int max2=pq.top();
            pq.pop();
            if(max1>max2)
            {
                pq.push(max1-max2);
            }
            else if(max2>max1)
            {
                pq.push(max2-max1);
            }
            if(pq.size()==1)
                return pq.top();
        }
        return 0;
    }
};