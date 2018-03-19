//Time Complexity: O(n) needed to pass through the lists simultaneously
//Space Complexity: O(n) required to store the new list
//difficulty: medium
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* answer = nullptr;
        if((l1->val+l2->val)>=10){
            answer = new ListNode{(l1->val+l2->val)-10};
            carry = 1;
        }else{
            answer = new ListNode{(l1->val+l2->val)};
        }
            l1=l1->next;
            l2=l2->next;
        ListNode* actualAnswer = answer;
        while(l1 != nullptr && l2 !=nullptr){
            if((l1->val+l2->val+carry)>=10){
                answer->next = new ListNode{(l1->val+l2->val+carry)-10};
                answer = answer->next;
                carry = 1;
            }else{
                answer->next= new ListNode{(l1->val+l2->val+carry)};
                answer = answer->next;
                carry = 0;
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1 != nullptr){
            if(l1->val+carry==10){
                answer->next = new ListNode{0};
                answer = answer->next;
                carry = 1;
            }else{
                answer->next = new ListNode{l1->val+carry};
                answer = answer->next;
                carry = 0;               
            }
            l1=l1->next;
        }
        while(l2 != nullptr){
            if(l2->val+carry==10){
                answer->next = new ListNode{0};
                answer = answer->next;
                carry = 1;
            }else{
                answer->next = new ListNode{l2->val+carry};
                answer = answer->next;
                carry = 0;               
            }
            l2=l2->next;
        }
        if(carry == 1){
            answer->next = new ListNode{1};
        }
        return actualAnswer;
    }
};