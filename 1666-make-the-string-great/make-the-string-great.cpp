class Solution {
public:
    string makeGood(string s) {
        string result = "";
        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];
            if(!result.empty()){
            if ( result.back() + 32 == ch || result.back() - 32 == ch) {
                result.pop_back();
                continue;
            }
            }
            result.push_back(ch);
        }
        return result;
    }
};