class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
stack<pair<int,int> > q;
        vector<int> res;
        res.resize(T.size());
        for(int i = T.size() - 1; i >= 0; i--){
            while(!q.empty() && T[i] >= q.top().first)q.pop();
            if(q.empty()) res[i] = 0;
            else res[i] = q.top().second - i;
            q.push({T[i], i});
        }
        return res;
    }
};
