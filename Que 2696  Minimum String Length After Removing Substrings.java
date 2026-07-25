// You are given a string s consisting only of uppercase English letters.

// You can apply some operations to this string where, in one operation, you can remove any occurrence of
// one of the substrings "AB" or "CD" from s.

// Return the minimum possible length of the resulting string that you can obtain.

// Note that the string concatenates after removing the substring and could produce new "AB" or "CD" 
//   substrings.

  class Solution {
    public int minLength(String s) {
        String ans="";
        for (char ch:s.toCharArray()) {
            ans=ans+ch;
            while (ans.contains("AB")||ans.contains("CD")) {
                ans=ans.replace("AB", ""); ans=ans.replace("CD", "");
            }
        }
        return ans.length();
    }
}
