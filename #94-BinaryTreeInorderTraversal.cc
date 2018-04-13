//Time Complexity: O(N) where N is the number of nodes, this is because we iterate through all nodes
//Space Complexity: O(N) required to store the roots in the stack.
//difficulty: medium
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    vector<int> v;
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==nullptr) return v;
        vector<TreeNode*> stack;
        TreeNode* curNode = root;
        while(true){
            while(curNode != nullptr){
                stack.emplace_back(curNode);
                curNode=curNode->left;
            }
            if(stack.empty()) return v;
            else{
                v.emplace_back(stack.back()->val);
                curNode = stack.back()->right;
                stack.pop_back();
            }
        }
    }
};
//Further Explanation:
//The recursive way is trivial, this implementation is iterative:
//If root is null, we return empty vector, otherwise we go to the leftist node, adding nodes to the stack along the way, when we reach the end
//if stack is empty we are done, otherwise, we pop the stack once to get the next iterative node, and then place the popped node's right tree
//to the stack, this makes sure we are inorder traversing, we do this until we traversed all nodes
