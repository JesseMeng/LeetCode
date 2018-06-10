//Time Complexity: O(n) needed to go through the array of heights
//Space Complexity: O(n) required to store maximum-sofars
//difficulty: hard
class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty())return 0;
        vector<int> leftmax,rightmax;
        int maxsofar = height[0];
        int rmax =height.back();
        for(int i=1;i<height.size()-1;++i){
            leftmax.emplace_back(max(maxsofar,height[i]));
            maxsofar = max(maxsofar,height[i]);
        }
        for(int i=height.size()-2;i>0;--i){
            rightmax.emplace_back(max(rmax,height[i]));
            rmax = max(rmax,height[i]);
        }
        for(auto z: rightmax){
            cout << z<<endl;
        }
        int answer = 0;
        for(int i=1; i<height.size()-1;++i){
            answer+=(min(leftmax[i-1],rightmax[rightmax.size()-i])-height[i]);
            cout << (min(leftmax[i-1],rightmax[rightmax.size()-i])-height[i])<<endl;
        }
        return answer;
    }
};
//Further explanation:
//Question asked for the amount of rain that can be stored at the various heights. The amount of rain is exactly equal to the
//minimum of the max of the heights to the left of the index and the max of the heights to the right of the index, subtracted by 
// the height at the index
//Dynamic programming approach is used to compute the max heights from the left and the right by taking the max of the previous index and
//the current height
