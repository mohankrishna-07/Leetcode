class Solution {
    public int lengthOfLongestSubstring(String s) {
        int ans=0;
       
        for(int i=0;i<s.length();i++){
           String st="";
           for(int j=i;j<s.length();j++){
            if(st.contains(String.valueOf(s.charAt(j)))){
                break;
            }
            st+=s.charAt(j);
            ans=Math.max(ans,st.length());
           }
        }
        return ans;
    }
}