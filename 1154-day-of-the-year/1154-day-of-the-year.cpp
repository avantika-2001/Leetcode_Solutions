class Solution {
public:
    int checkleap(string s){
        int y=stoi(s);
        if(y%400==0){
            return 1;
        }
        else if(y%100!=0 && y%4==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    int dayOfYear(string date) {
        int n=date.length();
        vector<int>v{31,28,31,30,31,30,31,31,30,31,30,31};
        string yr=date.substr(0,4);
        int a=checkleap(yr);
        if(a==1){
            v[1]=29;
        }
        int mon=stoi(date.substr(5,2))-1;
        int days=0;
        for(int i=0;i<mon;i++){
            days+=v[i];
        }
        int d=stoi(date.substr(8,2));
        return days+d;
    }
};