class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
vector<vector<int>> res(n, vector<int>(n, 0));
        int i = 0;
        int j = 0;
        int p = n - 1;
        int q = n - 1;
        int tmp = 1;
        while(1){
            for(int m = j; m <= q; m++){
                res[i][m] = tmp;
                tmp++;
            }
            i++;
            if(i > p){
                break;
            }
            for(int m = i; m <= p; m++){
                res[m][q] = tmp;
                tmp++;
            }
            q--;
            if(j > q){
                break;
            }
            for(int m = q; m >= j; m--){
                res[p][m] = tmp;
                tmp++;
            }
            p--;
            if(j > q){
                break;
            }
            for(int m = p; m >= i; m--){
                res[m][j] = tmp;
                tmp++;
            }
            j++;
            if(i > p){
                break;
            }
        }
        return res;
    }
};
