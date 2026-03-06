/*Given a linked list, swap every two adjacent nodes and return its head.
You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode *temp=head;
    if(head==NULL) return NULL;
    if(head->next==NULL) return head;
    int count=0;
    while(temp!=NULL) {
         temp=temp->next; 
         count++;
    }
    temp=head;
    int arr[count];
    for(int i=0;i<count;i++) {
        arr[i]=temp->val;
        temp=temp->next;
    }
   int tempo;
   for(int i=0;i<count-1;i++) {
    tempo=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=tempo;
    i++;
   }
   temp=head; int i=0;
   while(temp!=NULL) {
    temp->val=arr[i];
    temp=temp->next;
    i++;
   }
   return head;
}
