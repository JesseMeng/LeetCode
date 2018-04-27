//Time Complexity: O(n^2) needed to pass through the array and check for palindrome centered at each index
//Space Complexity: O(1)
//difficulty: medium
class Solution {
public:
    string longestPalindrome(string s) {
        if(s=="")return "";
        if(s.length()==1)return s;
        int start = 0;
        int end = 0;
        if(s[0]==s[1] && s.length()==2)return s;
        for(int i=1; i<s.length()-1;++i){
            int left = i;
            int right = i;
            char current = s[i];
            while(left-1>=0 && s[left-1]==current){
                left--;
            }
            while(right+1<s.length()&& s[right+1]==current){
                right++;
            }
            while(left>0 && right<s.length()-1){
                if(s[left-1]==s[right+1]){
                    left--;
                    right++;
                }else{
                    break;
                }
            }
            if(right-left+1>end-start+1){
                start=left;
                end = right;
            }
        }
        return s.substr(start, end-start+1);
    }
};
//Further explanation:
//Question asked to find the longest palindrome substring. First I check for edge cases when length is 0,1 or 2. Then for the string, I try to find
// the longest possible palindrome centered at each index. In the end, returning the longest palindrome.
