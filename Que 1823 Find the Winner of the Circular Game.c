/*There are n friends that are playing a game. The friends are sitting in a circle and are numbered from 1 to n in clockwise order. More formally, moving clockwise from the ith friend brings you to the (i+1)th friend for 1 <= i < n, and moving clockwise from the nth friend brings you to the 1st friend.

The rules of the game are as follows:

Start at the 1st friend.
Count the next k friends in the clockwise direction including the friend you started at. The counting wraps around the circle and may count some friends more than once.
The last friend you counted leaves the circle and loses the game.
If there is still more than one friend in the circle, go back to step 2 starting from the friend immediately clockwise of the friend who just lost and repeat.
Else, the last friend in the circle wins the game.
Given the number of friends, n, and an integer k, return the winner of the game.*/

int findTheWinner(int n, int k) {
    struct node {
        int data;
        struct node *next;
    } *head=NULL,*temp,*temp2=NULL,*newnode;
    int j=1,ans;
    for (int i=0;i<n;i++) {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=newnode;
        newnode->data=j;
        j++;

        if(head==NULL) head=newnode;
        else{
            temp=head;
            while(temp->next!=head) temp=temp->next;
            temp->next=newnode;
            newnode->next=head;
        }
    }
        temp=head;
        while(temp->next!=head) temp=temp->next;
        temp->next=head;
        temp=head;
        int count=n;
        while(count!=1) {
            temp2=NULL;
            for(int i=1;i<k;i++) {
                temp2=temp;
                temp=temp->next;
            }
            if(temp2==NULL){
                temp2=temp;
                while(temp2->next!=temp)
                temp2=temp2->next;
            }
            temp2->next=temp->next;
            free(temp);
            count--;
            temp=temp2->next;
        }
        ans=temp->data;
        return ans;
}
