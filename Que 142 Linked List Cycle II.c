/*Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.
There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer.
Internally, pos is used to denote the index of the node that tail's next pointer is connected to (0-indexed).
It is -1 if there is no cycle. Note that pos is not passed as a parameter.
Do not modify the linked list.*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *slow=head, *fast=head, *temp=head;
    while(fast!=NULL && fast-> next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) {
             while(temp!=slow) {
                temp=temp->next;
                slow=slow->next;
            }
            return temp; 
        }
    }
    return 0;
}
