//Time Complexity: O(log(n))
//Space Complexity: O(1)
//difficulty: easy
class Solution {
    public:
    int trailingZeroes(int n) {
        long long int answer = n/5;
        long long int m = 25;
        while(m<=n){
            answer+=n/m;
            m*=5;
        }
        return answer;
    }
};
//Further explanation: Trivial 
