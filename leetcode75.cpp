class Solution {
public:
    void sortColors(vector<int>& nums) {
 int left = 0, right = nums.size()-1, i = 0;
        while (i <= right){
            if (i < left) i++;
            else if (nums[i] == 0) {
                nums[i] = nums[left];
                nums[left] = 0;
                left++;
            }else if (nums[i] == 2){
                nums[i] = nums[right];
                nums[right] = 2;
                right--;
            } else i++;
        }
        return ;
    }
};
