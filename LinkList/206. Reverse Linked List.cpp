206. Reverse Linked List
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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* nextp;
        while(curr!=NULL){
            nextp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextp;
        }
        head=prev;
        return head;
    }
};


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* dummy=NULL;
        ListNode* nnext;
        while(head != NULL){
            nnext=head->next;
            head->next=dummy;
            dummy=head;
            head=nnext;
        }
        return dummy;
    }
};