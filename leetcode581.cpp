class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
vector<int> temp(nums.begin(), nums.end());
        sort(temp.begin(), temp.end());
        int i, j; i = 0; j = nums.size()-1;
        while(i < j){
            int flag = 1; 
            if(nums[i] == temp[i]){ i ++; flag = 0;} 
            if(nums[j] == temp[j]){ j --; flag = 0;}
            if(flag == 1) break; 
        }
        if(i >= j) return 0;
        return j-i+1;
    }
};
