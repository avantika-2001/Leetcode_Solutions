class Solution {
public:
    int bulbSwitch(int n) {
        /*TLE 
        vector<int>bulb(n+1,1);
        bulb[0]=0;
        int i=2,j=2;
        while(i<=n && j<=n){
            bulb[j]=(bulb[j]==1)?0:1;
            j+=i;
            if(j<=n)
                continue;
            else{
                i++;
                j=i;
            }
        }
        int sum=accumulate(bulb.begin(),bulb.end(),0);
        return sum;*/
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(i*i<=n)
                cnt++;
            else
                break;
        }
        return cnt;
    }
};