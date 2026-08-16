class Solution {
public:
    string reverseWords(string s) {
     stack<string>st;
     string ans;
     string word;
     for(int i = 0; i<s.size() ; i++){
        if (s[i]!=' '){
            word.push_back(s[i]);
        }
        else{
            if(!word.empty()){
                st.push(word);
                word= "";
            }
        }

     }
     if(!word.empty()){
        st.push(word);
     }
     while(!st.empty()){
     ans+=st.top();
     st.pop();
     if(!st.empty()){
        ans+=' ';
     }
     }
     return ans;

        
    }
};