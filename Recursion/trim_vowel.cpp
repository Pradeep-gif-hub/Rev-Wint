class Solution {
public:
    string trimTrailingVowels(string s) {
        unordered_set<char> st={'a','e','i','o','u'};
        while(!s.empty() && st.find(s[s.size()-1])!=st.end()){
            s.pop_back();
        }
        return s;
    }
};