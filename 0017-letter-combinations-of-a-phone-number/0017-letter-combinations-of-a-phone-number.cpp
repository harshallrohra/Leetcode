class Solution {
public:
    vector<string> letterCombinations(string digits) {
        string combos[]= {"" , "" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"};
        vector<string>ans;
        f(digits , 0 , ans , "" , combos);
        return ans;
        
    }
    void f(string digits , int ind , vector<string>&ans , string s , string combos[]){
        if (ind == digits.size()){
            ans.push_back(s);
            return;
        }
        int digit = digits[ind]-'0';
        for ( int i = 0 ; i < combos[digit].size();i++){
            f(digits, ind+1,ans,s+combos[digit][i],combos);
        }
    }
};