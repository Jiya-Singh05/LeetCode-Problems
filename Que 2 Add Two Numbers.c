/*You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */   
  struct ListNode *createnode(int value) {
        struct ListNode *n=malloc(sizeof(struct ListNode));
        n->val=value;
        n->next=NULL;
        return n;
    }
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *l3=NULL,*current=NULL;
    int value,carry=0;
    while(l1!=NULL || l2!=NULL ||carry!=0) {
        int sum = carry;   // carry ke liye
        if(l1!=NULL) {
            sum=sum+l1->val;  //apne aap carry add hojaegi
            l1=l1->next;
        }
        if(l2!=NULL) {
            sum=sum+l2->val;  //total sum ke liye
            l2=l2->next;
        }
        carry=sum/10;  //carry calculate krne ke liye
        sum=sum%10;    //if sum 2 digit ae
        struct ListNode *newnode=createnode(sum);
        if(l3==NULL) 
        { l3=newnode;
        current=newnode; }
        else {
            current->next=newnode;  //connect krne ke liye
            current=current->next;
        }
    }
    return l3;
   
    }


   
