class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int> mpp;
        unordered_map<char,int>npp;

        for(int i = 0 ; i<s.size(); i++){
            mpp[s[i]]++;

        }
        for(int i = 0 ; i<t.size(); i++){
            npp[t[i]]++;
            
        }
        return mpp==npp;
        
    }
};