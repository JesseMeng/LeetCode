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

