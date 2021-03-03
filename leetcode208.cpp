class Trie {
    unordered_set<string> T;
public:
    Trie() {

    }
    void insert(string word) {
    T.insert(word);
    }
    bool search(string word) {
if(T.find(word)==T.end())
return false;
else return true;
    }
    bool startsWith(string prefix) {
int n=prefix.size();
for(auto & it:T)
{
    if(it.size()>=n)
    {
        string tmp=it.substr(0,n);
        if(tmp==prefix) return true;
    }
}
return false;
    }
};

