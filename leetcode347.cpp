class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
 vector<int> ret;
        unordered_map<int, int> mp;
        priority_queue<pair<int, int>> pq;//与寻找第k大的数原理相同 
        for (auto i : nums) mp[i]++;
        for (auto p : mp) {
            pq.push(pair<int, int>(-p.second, p.first));
            if (pq.size() > k) pq.pop();
        }
        while (k--) {
            ret.push_back(pq.top().second);
            pq.pop();
        }
        return ret;
    }
};
