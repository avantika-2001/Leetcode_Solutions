class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>res(n);
        int x=1,i=0,j=0;
        if(n%2!=0){
            res[n/2]=0;
            i=n/2-1;
            j=n/2+1;
        }
        else{
            i=n/2-1;
            j=n/2;
        }
        while(i>=0 && j<n){
            res[i]=x;
            res[j]=-x;
            i--;j++;
            x++;
        }     
        return res;
    }
};