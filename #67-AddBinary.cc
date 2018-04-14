//Time Complexity: O(n) needed to pass through the strings
//Space Complexity: O(n) required to store the final string
//difficulty: easy
class Solution {
public:
    string addBinary(string a, string b) {
        int l = min(a.length(),b.length());
        int carry = 0;
        ostringstream os;
        int i;
        for(i=1; i<=l; ++i){
            int val = a[a.length()-i]-'0';
            int val2 = b[b.length()-i]-'0';
            int result = (val+val2+carry)%2;
            carry = (val+val2+carry)/2;
            os << result;
        }
        while(i<=a.length()){
            int val = a[a.length()-i]-'0';
            int result = (val+carry)%2;
            carry = (val+carry)/2;
            os << result;
            ++i;
        }
        while(i<=b.length()){
            int val = b[b.length()-i]-'0';
            int result = (val+carry)%2;
            carry = (val+carry)/2;
            os << result;  
            ++i;
        }
        if(carry == 1) os << carry;
        string ans = os.str();
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
//Algorithm performs addition digit by digit with carry out
