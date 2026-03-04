/*Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *temp1=head, *temp2=head;
    if(head==NULL) return NULL;
    if(head->next==NULL) return head;
    temp2=head->next;
    while(temp1!=NULL && temp2!=NULL) {
        if(temp1->val==temp2->val) {
        temp1->next=temp2->next; temp2=temp1->next;
        }
        else {
            temp1=temp1->next; temp2=temp1->next;
        }
    }
    return head;
}
