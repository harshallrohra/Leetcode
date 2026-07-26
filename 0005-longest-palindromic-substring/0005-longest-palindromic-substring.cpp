class Solution {
public:
    string longestPalindrome(string s) {
        string ans;

        for (int i = 0; i < s.size(); i++) {

            int l = i;
            int r = i;
            while (l >= 0 && r < s.size() && s[l] == s[r]) {
                l--;
                r++;
            }
            string initial = "";
            for (int j = l + 1; j < r; j++) {
                initial.push_back(s[j]);
            }
            if (initial.size() > ans.size()) {
                ans = initial;
            }
            initial = "";
            l = i;
            r = i + 1;
            while (l >= 0 && r < s.size() && s[l] == s[r]) {
                l--;
                r++;
            }
            for (int j = l + 1; j < r; j++) {
                initial.push_back(s[j]);
            }
            if (initial.size() > ans.size()) {
                ans = initial;
            }
        }
            return ans;
        }
    };