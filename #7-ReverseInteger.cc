//Time Complexity: O(log x) to process each digit and reverse
//Space Complexity: O(log x) space to store the digits
//difficulty: easy
class Solution {
public:
    int reverse(int x) {
        if(x==-2147483648)return 0;
        if(x==0) return 0;
        bool negative = false;
        if(x < 0) {
            negative = true;
            x*=-1;
        }
        vector<int> v;
        while(x>=10){
            if(!(x%10==0 && v.empty())){
                v.emplace_back(x%10);
            }
            x=(x-x%10)/10;
        }
        long int answer = x;
        int counter = v.size();
        for(int i=0; i<v.size();++i){
            answer+=v[i]*pow(10, counter);
            counter--;
        }
        if(negative) answer*=-1;
        if(answer > 2147483647) return 0;
        if(answer < -2147483648) return 0;
        return answer;
    }
};
//Further Explanation:
//Algorithm is straight forward that puts all digits on a stack and add them back one by one
//Need to pay attention for overflow; question asked to return 0 if overflow of 32 bit integers occurs
