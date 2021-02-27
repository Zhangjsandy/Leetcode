class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
  for (int i = 0; i < nums.size(); ++i)
        nums[abs(nums[i])-1] = -abs(nums[abs(nums[i])-1]);//将所有正数作为数组下标
    vector<int> res;
    for (int i = 0; i < nums.size(); ++i){
        if (nums[i] > 0)
            res.push_back(i+1);
    }
    return res;//置对应数组值为负值。那么，仍为正数的位置即为（未出现过）消失的数字。
    }
};
