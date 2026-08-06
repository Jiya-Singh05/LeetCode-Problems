// Design your implementation of the circular queue. The circular queue is a linear data structure in which the operations are performed based on FIFO (First In First Out) principle, and the last position is connected back to the first position to make a circle. It is also called "Ring Buffer".

// One of the benefits of the circular queue is that we can make use of the spaces in front of the queue. In a normal queue, once the queue becomes full, we cannot insert the next element even if there is a space in front of the queue. But using the circular queue, we can use the space to store new values.

// Implement the MyCircularQueue class:

// MyCircularQueue(k) Initializes the object with the size of the queue to be k.
// int Front() Gets the front item from the queue. If the queue is empty, return -1.
// int Rear() Gets the last item from the queue. If the queue is empty, return -1.
// boolean enQueue(int value) Inserts an element into the circular queue. Return true if the operation is successful.
// boolean deQueue() Deletes an element from the circular queue. Return true if the operation is successful.
// boolean isEmpty() Checks whether the circular queue is empty or not.
// boolean isFull() Checks whether the circular queue is full or not.
// You must solve the problem without using the built-in queue data structure in your programming language. 



typedef struct{
    int q[10000];
    int f;
    int r;
    int size;
    int k;
}MyCircularQueue;

MyCircularQueue* myCircularQueueCreate(int k){
    MyCircularQueue *a=malloc(sizeof(MyCircularQueue));
    a->f=0;
    a->r=-1;
    a->size=0;
    a->k=k;
    return a;
}

bool myCircularQueueEnQueue(MyCircularQueue* a,int value){
    if(a->size==a->k) return false;
    a->r=(a->r+1)%a->k;
    a->q[a->r]=value;
    a->size++;
    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* a){
    if(a->size==0) return false;
    a->f=(a->f+1)%a->k;
    a->size--;
    return true;
}

int myCircularQueueFront(MyCircularQueue* a){
    if(a->size==0) return -1;
    return a->q[a->f];
}

int myCircularQueueRear(MyCircularQueue* a){
    if(a->size==0) return -1;
    return a->q[a->r];
}

bool myCircularQueueIsEmpty(MyCircularQueue* a){
    return a->size==0;
}

bool myCircularQueueIsFull(MyCircularQueue* a){
    return a->size==a->k;
}

void myCircularQueueFree(MyCircularQueue* a){
    free(a);
}
/**
 * Your MyCircularQueue struct will be instantiated and called as such:
 * MyCircularQueue* obj = myCircularQueueCreate(k);
 * bool param_1 = myCircularQueueEnQueue(obj, value);
 
 * bool param_2 = myCircularQueueDeQueue(obj);
 
 * int param_3 = myCircularQueueFront(obj);
 
 * int param_4 = myCircularQueueRear(obj);
 
 * bool param_5 = myCircularQueueIsEmpty(obj);
 
 * bool param_6 = myCircularQueueIsFull(obj);
 
 * myCircularQueueFree(obj);
*/
