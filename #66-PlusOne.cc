//Time Complexity: O(n) needed to pass through the array
//Space Complexity: O(1)
//difficulty: easy

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1; i>=0; --i){
            if(digits[i]<9) {
                digits[i]++;
                return digits;
            }
            else {
                digits[i]=0;
            }
        }
        digits[0]=1;
        digits.emplace_back(0);
        return digits;
    }
};
//Further explanation: add one and return if digit is not 9, if all digits are 9s, then we have the special case at the end, where we have 1 and a list of zeroes.
