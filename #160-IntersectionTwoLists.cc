//Time Complexity: O(n) needed to pass through the arrays
//Space Complexity: O(1)
//difficulty: easy

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == nullptr || headB == nullptr) return nullptr;
        ListNode *t1 = headA;
        ListNode *t2 = headB;
        bool indicate1 = true;
        bool indicate2 = true;
        while(t1!=t2){
            if(t1->next==nullptr && indicate1){
                t1 = headB;
                indicate1 = false;
            }else if(t1->next==nullptr){
                return nullptr;
            }else{
                t1 = t1->next;
            }
            if(t2->next==nullptr && indicate2){
                t2 = headA;
                indicate2 = false;
            }else if(t2->next==nullptr){
                return nullptr;
            }else{
                t2 = t2->next;
            }
        }
        return t1;
    }
};
//Further Explanation: We iterate through both arrays simultanerously, when one pointer reaches the end, start iterating on the other one
// and similarly for the other array. We find the intersection point when the iteration pointers are equal.
