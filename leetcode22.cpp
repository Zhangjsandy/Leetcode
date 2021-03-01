class Solution {
public:
    vector<string> generateParenthesis(int n) {
vector<string> res;
        generateParenthesis(res, "", n, n);
        return res;
    }

    void generateParenthesis(vector<string> &res, string str, int l, int r) {
        if (l == 0 && r == 0) return res.push_back(str);
        if (l > 0) generateParenthesis(res, str+"(", l-1, r);
        if (r > 0 && r > l) generateParenthesis(res, str+")", l, r-1);
    }
};
