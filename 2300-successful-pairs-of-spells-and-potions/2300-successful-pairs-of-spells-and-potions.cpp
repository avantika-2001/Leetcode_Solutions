class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        int n=spells.size();
        int m=potions.size();
        vector<int>pair;
        int mid=0;
        for(int i=0;i<n;i++){
            int l=0,r=m-1;
            while(l<=r){
                mid=l+(r-l)/2;
                long long pdt=(long long)spells[i]*(long long)potions[mid];
                if(pdt<success){
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
            pair.push_back(m-l);
        }
        return pair;
    }
};