//Time Complexity: O(n) needed to pass through each character, find is amortized O(1)
//Space Complexity: O(n) required to store the chars in the set
//n is the length of max{J,s}
//difficulty: easy

#include<unordered_set>
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set<char>s;
        for(int i= 0; i<J.length();++i){
            s.insert(J[i]);
        }
        int answer = 0;
        for(int i =0; i<S.length();++i){
            if(s.find(S[i])!=s.end()) ++answer;
        }
        return answer;
    }
};
