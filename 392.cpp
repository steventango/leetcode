class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.size() == 0) {
            return true;
        }
        char i = 0;
        for (const char& c : t) {
            if (s[i] == c) {
                ++i;
            }
            if (i == s.size()) {
                return true;
            }
        }
        return false;
    }
};
