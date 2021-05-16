class LRUCache {
public:
    LRUCache(int capacity) : _capacity(capacity) {

    }   
    int get(int key) {
        auto it = _table.find(key);
        if (it != _table.end()) {
            _lru.splice(_lru.begin(), _lru, it->second);
            return it->second->second;
        }
        return -1;
    }
    void put(int key, int value) {
        auto it = _table.find(key);
        if (it != _table.end()) {
            _lru.splice(_lru.begin(), _lru, it->second);
            it->second->second = value;
            return;
        }
        _lru.emplace_front(key, value);
        _table[key] = _lru.begin();
        if (_table.size() > _capacity) {
            _table.erase(_lru.back().first);
            _lru.pop_back();
        }
    }
private:
    unordered_map<int, std::list<std::pair<int, int>>::iterator> _table;
    std::list<std::pair<int, int>> _lru;
    int _capacity;
};
