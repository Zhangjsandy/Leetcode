class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
 int n=nums.size();
        int left=1,right=1;//left��������۳ˣ�right�����ұ��۳�
        vector<int> res(n,1);        
        for(int i=0;i<n;++i)//����ÿ��Ԫ�������ҳ˻�������˵ó����
        {
            res[i]*=left;//��������ߵĳ˻�
            left*=nums[i];            
            res[n-1-i]*=right;  //�������ұߵĳ˻�
            right*=nums[n-1-i];
        }        
        return res;        
    }
};
