//Time Complexity: O(n) needed to go through the list
//Space Complexity: O(n) required to store answer
//difficulty: easy
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr)return nullptr;
        ListNode* ans = new ListNode{head->val};
        ListNode* actual = ans;
        int preint =head->val;
        head = head->next;
        while(head!=nullptr){
            if(head->val != preint){
                    preint = head->val;
                    ans->next = new ListNode{head->val};
                    ans = ans->next;
            }
            head = head->next;
        }
        return actual;
    }
};
//Further Explanation: logic is quite straight forward, since linked list is already sorted, we just check for duplicates and only
//add those non-duplicate elements to the answer that we are returning.
