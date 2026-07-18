class Solution {
public:
    int numberOfSubstrings(string s) {
        int cnt = 0;
        int hash[3];
        fill(hash,hash+3,-1);
        for (int i = 0 ; i< s.size(); i++){
                hash[s[i]-'a']=i;
            if (hash[s[0]-'a'] !=-1 && hash[s[1]-'a']!=-1 && hash[s[2]-'a']!=-1){
                cnt = cnt + min({hash[0],hash[1],hash[2]})+1;
            }

        }
        return cnt;
    }
};