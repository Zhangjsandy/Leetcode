class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
 return DFS(nums,0,0,S);
    }
    int  DFS(vector<int>& nums,int n,int sum,int S){
        if(n == nums.size())
            return (sum == S)?1:0;
        return DFS(nums,n+1,sum + nums[n],S) + DFS(nums,n+1,sum - nums[n],S);
    }
};
