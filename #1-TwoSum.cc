//Time Complexity: O(n) needed to pass through the array
//Space Complexity: O(n) required to store the numbers in the array
//difficulty: easy
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //I will make a hashtable to pass the array values as keys and their indices as the corresponding values
        std::map<int, int> m;
        for(int i=0; i< nums.size();++i){
            if(m.count(target-nums[i])==1){
                vector<int> v;
                v.emplace_back(m[(target-nums[i])]);
                v.emplace_back(i);
                return v;
            }
            m[nums[i]]=i;
        }
    
    }
};
//Further explanation:
//Question asked to find the indices of 2 elements in the array such they add up to target, we can simply go through each element one by one
//storing elements in a map, if such a feasile pair exists, then the second element's complementary, which is the first element will eventually be located in the map
//this will find our solution
