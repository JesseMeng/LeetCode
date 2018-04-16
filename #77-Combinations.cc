//Time Complexity: O(nCk) needed to return all combinations
//Space Complexity: O(k*nCk) required to store the list of combinations
//difficulty: medium
class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> combine(int n, int k) {
            for(int i=1;i<=n-k+1;++i){
               vector<int> v;
                v.emplace_back(i);
                combinehelp(n, k-1,i+1,v);
            }
        return ans;
    }
    void combinehelp(int n, int k, int start, vector<int>v){
        if(k == 0) {
            ans.emplace_back(v);
            return;
        }else{
            for(int i=start;i<=n-k+1;++i){
                vector<int> v2 = v;
                v2.emplace_back(i);
                combinehelp(n,k-1,i+1,v2);
            }
        }
    }
};
//Further Explanation: question asks for the combinations of k numbers in the numbers from 1 to n. Therefore,
//my algorithm implements the recursive strategy. First for each number i from 1 to n-k+1, I create a vector with 1 element containing
//that number, that will be the smallest number in that vector containing it. Then I recurse, this time only choosing k-1 elements
//since I already have an element chosen, then since it was my minimal element, I choose from pool of numbers listed from i+1 to n.
//From here, I have the general recursive case where as long as k is still positive, I create vectors that are built from the existing 
//vector with 1 element added in from the pool of numbers. When k reaches 0, it means the vector is already full so it is put in answer.
