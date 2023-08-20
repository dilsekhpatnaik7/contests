// Problem Link: https://leetcode.com/contest/weekly-contest-359/problems/check-if-a-string-is-an-acronym-of-words/

class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string ans = "";
        for(int i = 0; i < words.size(); i++) {
            ans += words[i][0];
        }
        return ans == s;
    }
};