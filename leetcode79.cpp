class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
int m = board.size();
       int n = board[0].size();
       for(int i = 0; i < m; ++i)
       {
           for(int j = 0; j < n; ++j)
           {
             if(dfs(m,n,board,word,i,j,0))
                 return true;
           }
       }
       return false;
    }
    bool dfs(int m, int n, vector<vector<char>>& board, const string &word, int i, int j, int k)
    {
        if(i < 0 || i >= m || j < 0 || j >= n || board[i][j] != word[k])
        {
            return false;
        }
        if(k == word.size()-1)
        {
            return true;
        }
         board[i][j] = '\0';
         bool tmp = dfs(m,n,board,word,i,j+1,k+1) || dfs(m,n,board,word,i+1,j,k+1) ||
         dfs(m,n,board,word,i,j-1,k+1) || dfs(m,n,board,word,i-1,j,k+1);
         board[i][j] = word[k];
         return tmp;
    }
};
