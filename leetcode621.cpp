class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {// ��ʼ����ĸ����Ͱ
        vector<short> words(26, 0);// ��¼������
        short amount = tasks.size();// ��ĸͰ����
        for (char c : tasks) ++words[c-'A'];// ����ĸͰ������������
        sort(words.begin(), words.end(), greater<short>());// ɾ��β������0
        while (!words.back()) words.pop_back();// ������
        int time = 0;
        while (amount){// ִ��n+1�����ڣ��ֱ���Ͱ��ǰn+1������
            for (char i=0; i <= n; ++i){
                if (!amount) return time;
                if (i < words.size() && words[i]){
                    --amount;
                    --words[i];
                } 
                ++time;
            }// �ٴ�����
            sort(words.begin(), words.end(), greater<short>());
            while (words.size() && !words.back()) words.pop_back();
        }
        return time;
    }
};
