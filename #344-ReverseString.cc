//Time Complexity: O(n/2) needed to pass through the string
//Space Complexity: O(1)
//difficulty: easy
class Solution {
public:
    string reverseString(string s) {
        for(int i=0; i<s.size()/2;++i){
            char temp = s[s.size()-1-i];
            s[s.size()-1-i]=s[i];
            s[i]=temp;
        }
        return s;
    }
};
//Straight forward logic
