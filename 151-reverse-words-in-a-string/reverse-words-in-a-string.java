class Solution {
    public String reverseWords(String s) {
        String arr[]=s.trim().split("\\s+");
        String m="";
        for(int i=arr.length-1;i>=0;i--){
            m=m+arr[i];
            if(i!=0){
                m=m+" ";
            }
        }
        return m;
    }
}