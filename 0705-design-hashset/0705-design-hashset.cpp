class MyHashSet {
public:
    vector<int>v;
    MyHashSet() {
        v.clear();
    }
    
    void add(int key) {
        int f=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==key){
                f=1;
                break;
            }
        }
        if(f==0)
            v.push_back(key);
    }
    
    void remove(int key) {
        for(int i=0;i<v.size();i++){
            if(v[i]==key){
                v.erase(v.begin()+i);
                break;
            }
        }
    }
    
    bool contains(int key) {
        for(int i=0;i<v.size();i++){
            if(v[i]==key){
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */