class SmallestInfiniteSet {
public:
    priority_queue<int,vector<int>,greater<int>>pq;
    vector<int>seen;
    SmallestInfiniteSet() {
        vector<int>vis(5000,1);
        seen=vis;
        for(int i=1;i<=5000;i++){
            pq.push(i);
        }
    }
    
    int popSmallest() {
        int f=pq.top();
        pq.pop();
        seen[f]=0;
        return f;           
    }
    
    void addBack(int num) {
        if(seen[num]==0){
            pq.push(num);
            seen[num]=1;
        }
        return;
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */