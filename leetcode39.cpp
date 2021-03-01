class Solution {
vector<int> path;
    vector<vector<int>> result;
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        backtracking(0,target,candidates,0);
        return result;
    }

    void backtracking(int sum,int target,vector<int>& candidates,int level){
        if(sum > target)
            return;
        if(sum == target){
            result.push_back(path);
            return;
        }

        for(int i = level;i<candidates.size();++i){
            path.push_back(candidates[i]);
            backtracking(sum + candidates[i],target,candidates,i);
            path.pop_back();
        }
        return;
    }
};
