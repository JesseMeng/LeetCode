//Time Complexity: O(n) needed to pass through the string character by character
//Space Complexity: O(1) needed to store the 256 accumulators for each char value
//difficulty: medium
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int counter = 0;
        int max= 0;
        char head;
        vector<int> z(256, -1);
        for(int i=0; i<s.length(); ++i){
            if(z[s[i]]==-1){
                z[s[i]]=i;
                counter++;
                if(counter > max) max=counter;

            } 
            else{
                if(z[s[i]]>=z[s[i-counter]]) {
                    counter=i-z[s[i]];
                }else{
                    counter++;
                }
                if(counter > max) max=counter;
                z[s[i]]=i;
            }
        }
        return max;
    }
};
//Further explanation:
//Question asks to find the longest substring without repetition of characters, thus my algorithm is to store the index of the last appearing value of
//each character, defaulting to -1 if it hasn't appeared yet. When we scan through the vector of characters, counter keeps track the number of
//current nonrepeating string's length while max keeps track of the max length so far. If we encounter a char that hasn't been encountered previously,
//then we can add one to the counter of course. Otherwise, we find the last point of encounter, and reduce our counter so that it starts at
//1 index after the last index of encounter of this particular char. This way, we still maintain a string with counter length of unrepeated characters.
//Basically, when we encounter duplicate, we have to remove the previous char, along with all chars before that previous duplicate. Now, of course,
//the duplicate would only cause a problem if it is actually part of our current non-repeated string. If it was removed due to the deletion process
//for another character, then we can safely add it. In the end, max produces our answer.
