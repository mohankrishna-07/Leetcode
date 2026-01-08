class Solution {
public:
    int mySqrt(int x) {
        if(x<2){
            return x;
        }
        int left=1,right=x/2;
        while(left<=right){
            int mid=left+(right-left)/2;
            long long squ=(long long)mid*mid;
            if(squ==x){
                return mid;
            }else if(squ<x){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return right;
    }
};