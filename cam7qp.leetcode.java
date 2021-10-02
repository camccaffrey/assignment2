// Name: Connor McCaffrey
// Computing ID: cam7qp

class Solution {
    public boolean isPalindrome(int x) {
        if( x < 0 ) { return false; }
        
        String str = Integer.toString(x);
        int digits = str.length();
        
        for( int i = 0; i < digits; i++) {
            if( str.charAt(i) != str.charAt(digits - i - 1)) { return false; }
        }
        
        return true;
    }
}