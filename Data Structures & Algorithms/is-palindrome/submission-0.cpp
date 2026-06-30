class Solution {
public:
    bool isPalindrome(string s) {
        string reverse = "";
        string newString ="";
        for (int i = 0; i < s.length(); ++i){
            if(isalnum(s[i])){
                newString+=toupper(s[i]);
            }
            if(isalnum(s[s.length()-1-i])){
                reverse+=toupper(s[s.length()-1-i]);
            }
        }
        return reverse == newString;
    }
};
