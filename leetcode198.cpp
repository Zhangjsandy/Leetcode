class Solution {
public:
    int rob(vector<int>& nums) {
int len=nums.size();
if(len==0)
{
    return 0;
}
vector<int> result(len,0);
result[0]=nums[0];
for(int i = 1;i<len;++i)
        {
            if(i==1)
            {
                result[i] = max(nums[i-1],nums[i]);
            }
            else
            {
                result[i] = max(result[i-2] + nums[i],result[i-1]);
            }
        }
        sort(result.begin(),result.end());
        return result[len-1];
    }
};
