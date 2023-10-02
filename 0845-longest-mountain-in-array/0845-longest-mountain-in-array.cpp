class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        int len=0;
        for(int i=1;i<n-1;){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                int cnt=1;
                int j=i;
                while(j>0 && arr[j]>arr[j-1]){
                    j--;
                    cnt++;
                }
                while(i<n-1 && arr[i]>arr[i+1]){
                    i++;
                    cnt++;
                }
                len=max(len,cnt);
            }
            else{
                i++;
            }
        }
        return len;
    }
};