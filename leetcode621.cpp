class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {// 初始化字母计数桶
        vector<short> words(26, 0);// 记录任务量
        short amount = tasks.size();// 字母桶计数
        for (char c : tasks) ++words[c-'A'];// 对字母桶次数降序排序
        sort(words.begin(), words.end(), greater<short>());// 删除尾部次数0
        while (!words.back()) words.pop_back();// 周期数
        int time = 0;
        while (amount){// 执行n+1个周期，分别处理桶中前n+1个任务
            for (char i=0; i <= n; ++i){
                if (!amount) return time;
                if (i < words.size() && words[i]){
                    --amount;
                    --words[i];
                } 
                ++time;
            }// 再次排序
            sort(words.begin(), words.end(), greater<short>());
            while (words.size() && !words.back()) words.pop_back();
        }
        return time;
    }
};
