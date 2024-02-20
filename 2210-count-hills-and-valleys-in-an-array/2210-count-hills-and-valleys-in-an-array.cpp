class Solution {
public:
    int countHillValley(vector<int>& nums) {
        stack<int>s;
        s.push(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(!s.empty() && s.top()!=nums[i]){
                s.push(nums[i]);
            }
        }
        int cnt=0;
        nums.clear();
        while(!s.empty()){
            nums.push_back(s.top());
            s.pop();
        }
        for(int i=1;i<nums.size()-1;i++){
            if((nums[i-1]<nums[i] && nums[i]>nums[i+1]) || (nums[i-1]>nums[i] && nums[i]<nums[i+1])){
                cnt++;
            }
        }
        return cnt;
    }
};