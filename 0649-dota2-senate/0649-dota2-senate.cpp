class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>r, d;
        for(int i = 0; i<senate.size(); i++){
            if(senate[i] == 'R') r.push(i);
            if(senate[i] == 'D') d.push(i);
        }
        int n = senate.size();
        while(!r.empty() && !d.empty()){
            if(r.front() < d.front()) r.push(n++);
            else d.push(n++);
            r.pop();
            d.pop();
        }

        return r.empty()?"Dire":"Radiant";


    }
};