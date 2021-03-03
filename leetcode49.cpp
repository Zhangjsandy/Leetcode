class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
 vector<vector<string>> res;
        unordered_map<string,int> m;
        int i = 0;
        for(auto str:strs){
            string str1 = str;
            sort(str1.begin(),str1.end());
            if (m.count(str1) > 0){
                res[m[str1]].push_back(str);
            }
            else{
                m[str1] = i++;
                res.push_back(vector<string>{str});
            }
        }
        return res;
    }
};
