class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
           return false;
        }
        else{
            long long tmp  = x;
            vector<long long> ans;
            while(tmp>0){
                int remainder = tmp%10;
                tmp= tmp/10;
                ans.push_back(remainder);
            }

            long long dum = 0;
            long long n = ans.size();
            for(int i = 0 ;i<n;i++){
                dum=dum*10+ans[i];
            }

            return dum == x;

        }
    }
};