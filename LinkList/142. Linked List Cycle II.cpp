142. Linked List Cycle II

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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        int count=0;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
               break;
            }
        }
        if(fast == NULL || fast->next == NULL){
            return NULL;
        }
        while(head!=slow){
            head=head->next;
            slow=slow->next;
        }
        return head;
    }
};