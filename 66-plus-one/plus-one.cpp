class Solution {
public:
    vector<int> plusOne(vector<int>& dig) {
        int c=1;
        for(int i=dig.size()-1;i>=0;i--){
            int sum=dig[i]+c;
            dig[i]=sum%10;
            c=sum/10;
        }
        if(c){
            dig.insert(dig.begin(),1);
        }
        return dig;
    }
};