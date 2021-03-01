class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
sort(people.begin(), people.end());  // 从低到高对人排序

        vector<vector<int>> res(people.size());
        for(auto & p : people){
            int count = -1; // 寻找空位或身高为0的位置
            for(int i = 0; i < res.size(); i++){
                if(res[i].empty() || res[i][0] == p[0]) count++;
                if(count == p[1]){
                    res[i] = p;
                    break;
                }
            }
        }
        return res;
    }
};
