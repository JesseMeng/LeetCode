//Time Complexity: O(n) needed to pass through the array
//Space Complexity: O(1) 
//difficulty: easy

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();
    }
};
//Further Explanation:
//Vector's built in method erase is used to erase all values equaling to val.
