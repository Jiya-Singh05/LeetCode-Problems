// Implement a first in first out (FIFO) queue using only two stacks. The implemented queue 
// should support all the functions of a normal queue (push, peek, pop, and empty).

// Implement the MyQueue class:

// void push(int x) Pushes element x to the back of the queue.
// int pop() Removes the element from the front of the queue and returns it.
// int peek() Returns the element at the front of the queue.
// boolean empty() Returns true if the queue is empty, false otherwise.

#define MAX 100
typedef struct {
    int s1[MAX];
    int s2[MAX];
    int top1;
    int top2;
} MyQueue;

MyQueue* myQueueCreate() {
    MyQueue* a=(MyQueue*)malloc(sizeof(MyQueue));
    a->top1=-1;
    a->top2=-1;
    return a;
}

void myQueuePush(MyQueue* a,int x) {
    a->s1[++a->top1]=x;
}

int myQueuePop(MyQueue* a) {
    if (a->top2==-1) {
        while (a->top1!=-1) a->s2[++a->top2]=a->s1[a->top1--];
    }
    return a->s2[a->top2--];
}

int myQueuePeek(MyQueue* a) {
    if (a->top2 == -1) {
        while (a->top1 != -1) a->s2[++a->top2] = a->s1[a->top1--];
    }
    return a->s2[a->top2];
}

bool myQueueEmpty(MyQueue* a) {
    return (a->top1 == -1 && a->top2 == -1);
}

void myQueueFree(MyQueue* a) {
    free(a);
}
