class Solution {
public:
    int reverse(int x) {
        int temp=x;
        long long int rev=0;
        while(temp!=0){
            rev=rev*10+temp%10;
            if(rev<=INT_MIN || rev>=INT_MAX){
            return 0;}
            temp/=10;
        }        
        return rev;
    }
};