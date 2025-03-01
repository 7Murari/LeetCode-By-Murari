class Solution {
public:
    int lengthOfLastWord(string s) {
        int res = 0;
        int cur = 0;
        for(char c : s){
            if(c == ' '){
                cur=0;
            }
            else{
                cur++;
                if(cur>0){
                    res=cur;
                }
            }
        }
        return res;
    }
};