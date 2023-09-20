class Solution {
public:
    int countOdds(int low, int high) {
        /*int count=0;
        int MOD=1e9;
        for(int i=low;i<=high;i++)
        {
            if(i%2!=0)
                count++;
        }
        return count%MOD;
        int n=high-low+1;
        if(n%2==0){
            return n/2;
        }
        else{
            return n/2+low%2;
        }*/
        int n=high-low+1;
        if(low%2==0 && high%2==0)
        return floor(n/2.0);
        else
            return ceil(n/2.0);
    }
};