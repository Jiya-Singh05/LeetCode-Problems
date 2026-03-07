/*Given the head of a linked list, remove the nth node from the end of the list and return its head.
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    if(head==NULL) return NULL;
    if(head->next==NULL) return NULL;
    struct ListNode *temp=head,*del,*count=head;
    int sz=0;
    while(count!=NULL) {
        sz++;
        count=count->next;
    }
    if(n==sz) {
        struct ListNode *temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    int todel=sz-n;
    for(int i=1;i<todel;i++) temp=temp->next;
    del=temp->next;
    temp->next=del->next;
    free(del);
    return head;
}
