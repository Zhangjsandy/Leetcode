class Solution {
public:
    int maxProfit(vector<int>& prices) {
 // ��̬�滮��ÿ������״̬�����룬�����͵ȴ�״̬
        int n = prices.size();
        // f[i][0]: ���ϳ��й�Ʊ���������(����������������, f[i][0] = max(f[i-1][0], f[i-1][2]-prices[i]))
        // f[i][1]: ���ϲ����й�Ʊ�����Ҵ����䶳���е��ۼ��������(��������, f[i][1] = f[i-1][0]+prices[i])
        // f[i][2]: ���ϲ����й�Ʊ�����Ҳ����䶳���е��ۼ��������(�ȴ�״̬���������������������f[i][2] = max(f[i-1][1], f[i-1][2]))
        vector<vector<int>> f(n, vector<int>(3));
        f[0][0] = -prices[0];
        for (int i = 1; i < n; ++i) {
            f[i][0] = max(f[i - 1][0], f[i - 1][2] - prices[i]);
            f[i][1] = f[i - 1][0] + prices[i];
            f[i][2] = max(f[i - 1][1], f[i - 1][2]);
        }
        return max(f[n - 1][1], f[n - 1][2]);
    }
};
