class Solution {
    public boolean isSubsequence(String s, String t) {
        int str=0;
        for(int i=0;i<s.length();i++){
            char ch=s.charAt(i);
            Boolean f=false;
            for(int j=str;j<t.length();j++){
                char sh=t.charAt(j);
                if(ch==sh){
                    f=true;
                    str=j+1;
                    break;
                }
            }
            if(!f){
                return false;
            }
        }
        return true;
    }
}