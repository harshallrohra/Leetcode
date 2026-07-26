class Solution {
public:
    int maxDepth(string s) {
        int count =0;
        int max_count=0;
        for(auto it : s){
            
            if(it=='(') count++;
            else if(it==')')count--;
            max_count=max(max_count , count);
        }
        return max_count;
    }
};