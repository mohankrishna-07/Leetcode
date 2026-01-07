class Solution {
public:
    bool isPalindrome(int x) {
         int temp=x;
        if(x<0){
        return false;
        }
        long long rev=0;
        long long dig;
        while(x>0){
            dig=x%10;
            rev=rev*10+dig;
            x=x/10;
        }
        return temp==rev;
    }
};