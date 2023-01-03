class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> map;
        unordered_set<char> mapped;
        for (int i = 0; i < t.size(); ++i) {
            auto it = map.find(t[i]);
            if (it != map.end()) {
                if (it->second != s[i]) {
                    return false;
                }
            } else {
                if (mapped.find(s[i]) != mapped.end()) {
                    return false;
                }
                map[t[i]] = s[i];
                mapped.insert(s[i]);
            }
        }
        return true;
    }
};
