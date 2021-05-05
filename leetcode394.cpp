class Solution {
public:
    string decodeString(string s) {
int i=0;
return dfs(s, i);
    }
    string dfs(string & s, int & i){
        string res = "";
        int count = 0;
        for(; i < s.length(); i++){
            if(isdigit(s[i])){
                count = count*10 + s[i]-'0';
            }
            else if(s[i] == '['){
                string tmp = dfs(s, ++i);
                for(int j = 0; j < count; j++){
                    res += tmp;
                }
                count = 0;
            }
            else if (s[i] == ']'){
                return res;
            }
            else{
                res += s[i];
            }
        }
        return res;
    }
};
