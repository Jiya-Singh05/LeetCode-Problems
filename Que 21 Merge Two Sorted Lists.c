/*You are given the heads of two sorted linked lists list1 and list2.
Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.
Return the head of the merged linked list.*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode *temp,*tempo;
    if(list1==NULL && list2==NULL) return NULL;
    if(list1==NULL) return list2;
    if(list2==NULL) return list1;

    if(list1->val>list2->val) {
        temp=list2;
        list2=list2->next;
    }
    else {
        temp=list1;
        list1=list1->next;
    }
    tempo=temp;
    while(list1!=NULL && list2!=NULL) {
        if(list1->val >= list2->val) {
            tempo->next=list2;
            list2=list2->next;
            tempo=tempo->next;
        }
        else {
            tempo->next=list1;
            list1=list1->next;
            tempo=tempo->next;
        }

    }
    if(list1==NULL) tempo->next=list2;
    else tempo->next=list1;
    return temp;
}
