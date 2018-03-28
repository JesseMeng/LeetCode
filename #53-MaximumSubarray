//Time Complexity: O(n) needed to pass through the array
//Space Complexity: O(1)
//difficulty: easy
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur = nums[0];
        int max = nums[0];
        for(int i=1; i< nums.size();++i){
            if(cur <0) cur=0;
            cur+=nums[i];
            if(cur > max) max=cur;
        }
        return max;
    }
};
//Further Explanation: any subsequence that add up to negative is not worth counting and would not be the head of an optimum sequence
//so we go over each element and try to find the maximum subsequence.
