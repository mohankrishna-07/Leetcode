class Solution {
    public boolean isAnagram(String s, String t) {
        HashSet<Integer> set=new HashSet<>();
        int a=s.length();
        int b=t.length();
        if(a!=b){
            return false;
        }
        char[] ch=s.toCharArray();
        char[] sh=t.toCharArray();
        Arrays.sort(ch);
        Arrays.sort(sh);
        return Arrays.equals(ch,sh);
    }
}