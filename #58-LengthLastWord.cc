//Time Complexity: O(n) where n is the length of the last word plus trailing spaces
//Space Complexity: O(1)
//difficulty: easy

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for(int i=s.length()-1; i>=0;--i){
            if(s[i]!=' ') ++count;
            else {
                if(count != 0)  return count;
            }
        }
        return count;
    }
};
//Further explanation: algorithm starts from the back of the string, stops after the length of the last word is counted and
//returns the last word's length
