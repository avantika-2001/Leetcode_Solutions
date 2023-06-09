class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        /*for(int i=0;i<letters.size();i++){
            if((letters[i]-'a')>(target-'a'))
                return letters[i];
        }
        return letters[0];*/
        int l=0;
        int r=letters.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(letters[mid]<=target)
                l=mid+1;
            else
                r=mid-1;
        }
        return l==letters.size()?letters[0]:letters[l];
        
    }
};