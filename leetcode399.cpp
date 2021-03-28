class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
 vector<vector<double>> m(50, vector<double>());
        for(int i=0;i<50;i++){
            m[i].resize(50);
        }
        map<string, int> w2id;
        for(int i=0;i<equations.size();i++){
            string a = equations[i][0], b = equations[i][1];
            if(w2id.find(a)==w2id.end()) w2id[a] = w2id.size();
            if(w2id.find(b)==w2id.end()) w2id[b] = w2id.size();
            int aid = w2id[a], bid = w2id[b];
            m[aid][bid] = values[i];
            m[bid][aid] = 1/values[i];
            m[aid][aid] = 1.0;
            m[bid][bid] = 1.0;
        }
        vector<double> result;
        for(int i=0;i<queries.size();i++){
            string a = queries[i][0], b = queries[i][1];
            if(w2id.find(a)==w2id.end() || w2id.find(b)==w2id.end()){
                result.push_back(-1.0);
                continue;
            }
            int aid = w2id[a], bid = w2id[b];
            vector<int> vis(50,0);
            queue<map<int, double>> q;
            int yes = 0;
            for(int j=0;j<m[aid].size();j++){//第一次判断
                if(m[aid][j]==0.0) continue;
                vis[j] = 1;
                map<int, double> mm;
                mm[j] = m[aid][j];
                q.push(mm);
                if(bid == j) {
                    result.push_back(m[aid][j]);
                    yes = 1;
                    break;
                }
            }
            if(yes == 1) continue;
            while(!q.empty()){//从队列中不断判断
                map<int, double> q_a = q.front();
                aid = q_a.begin()->first;
                double vl = q_a.begin()->second;
                q.pop();
                for(int j=0;j<m[aid].size();j++){//第一次判断
                    if(m[aid][j]==0.0) continue;
                    if(vis[j]==1) continue;
                    vis[j]==1;
                    map<int, double> mm;
                    mm[j] = m[aid][j]*vl;
                    q.push(mm);
                    if(bid == j) {
                        yes = 1;
                        result.push_back(m[aid][j]*vl);
                        break;
                    }
                }
                if(yes == 1) break;
            }
            if(yes == 0) {
                result.push_back(-1.0);
            }
        }
        return result;
    }
};
