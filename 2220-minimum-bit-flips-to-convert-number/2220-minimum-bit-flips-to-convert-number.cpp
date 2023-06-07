class Solution {
public:
    int minBitFlips(int start, int goal) {
        int cnt=0;
        while(start>0 | goal>0){
            int s=start&1;
            int g=goal&1;
            if(s^g!=0){
                cnt++;
            }
            start>>=1;
            goal>>=1;
        }
        return cnt;
    }
};