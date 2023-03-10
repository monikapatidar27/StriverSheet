2095. Delete the Middle Node of a Linked List

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* ptr=head;
        int count=0;
        while(ptr != NULL){
            ptr=ptr->next;
            count++;
        }
        if(count == 1){
            return NULL;
        }
        ptr=head;
        for(int i=1;i<(count/2);i++){
            ptr=ptr->next;
        }
        ptr->next = ptr->next->next;
        return head;
    }
};