//Time Complexity: O(nlogn) needed to sort the array
//Space Complexity: O(1)
//difficulty: easy
#include <algorithm>
#include <vector>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<3) return nums[0];
        else{
            if(nums[nums.size()/2-1]==nums[nums.size()/2]){
                return nums[nums.size()/2-1];
            }else{
                return nums[nums.size()/2];
            }
        }
        
    }
};
//Further Explanation:
//The question asks to find the element that appears more than half of the times, in particular if n is even, it must be one of
//the middle elements, if n is odd, it must also be the middle element. 
