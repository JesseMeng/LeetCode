//Time Complexity: O(lognlogm) needed to search for the row then the colun
//Space Complexity: O(1)
//difficulty: medium
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //if empty matrix, then return false
        if(matrix.size()==0) return false;
        if(matrix[0].size()==0)return false;
        //if target does not belong to matrix return false
        if(matrix[matrix.size()-1][matrix[0].size()-1]<target)return false;
        if(matrix[0][0]>target)return false;
        //check for edge elements
        if(matrix[0][0]==target || matrix[matrix.size()-1][matrix[0].size()-1]==target)return true;
        //determine row
        int n= matrix[0].size()-1;
        int low = 0;
        int high = matrix.size()-1;
        int mid= (low+high)/2;
        while(mid>low){
            if(matrix[mid][n]> target &&matrix[mid][0]<target){
                break;
            }else if(matrix[mid][n]== target || matrix[mid][0]==target){
                return true;
            }else if(matrix[mid][0]>target){
                high = mid;
            }else if(matrix[mid][n]<target){
                low = mid;
            }
            mid=(low+high)/2;
        }
        if(matrix[mid][n]<target)mid++;
        //determine column
        int index = mid;
        low = 0;
        high=n;
        mid = (low+high)/2;
        while(mid>low){
            if(matrix[index][mid]== target){
                return true;
            }else if(matrix[index][mid]>target){
                high = mid;
            }else if(matrix[index][mid]<target){
                low = mid;
            }
            mid=(low+high)/2;
        }
       if(matrix[index][high]==target || matrix[index][low]==target)return true;
        return false;
    }
};
//Further explanation: The algorithm checks for the edge cases. Then in general, since elements in the array are already sorted, it applies 
//binary search algorithm to determine the row to search for, then apply binary search on that row to produce the boolean indicating whether
//target exists
