class Solution {
public:
    bool canPartition(vector<int>& nums) {
int sum = 0;
    for(int e : nums) sum += e;
    if(sum & 1) return false;
    vector<bool> d((sum>>=1)+1, false);//sum/=2
    for(int i = 0 ; i < nums.size() ; i++){
      for(int s = sum ; s >= nums[i] ; s--){
        if(!i) d[s] = (nums[i]==s);
        else d[s] = d[s] || d[s-nums[i]];
      }
    }
    return d[sum];
    }
};
