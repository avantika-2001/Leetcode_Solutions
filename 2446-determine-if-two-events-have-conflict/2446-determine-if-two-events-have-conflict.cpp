class Solution {
public:
    int cal(string s){
        string t="";
        for(auto it:s){
            if(it!=':'){
                t+=it;
            }
        }
        return stoi(t);        
    }
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        if((cal(event1[1])>=cal(event2[0])) && (cal(event2[1])>=cal(event1[0]))){
            return true;
        }
        return false;
    }
};