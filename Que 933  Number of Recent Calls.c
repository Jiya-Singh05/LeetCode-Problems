// You have a RecentCounter class which counts the number of recent requests within a certain time frame.

// Implement the RecentCounter class:

// RecentCounter() Initializes the counter with zero recent requests.
// int ping(int t) Adds a new request at time t, where t represents some time in milliseconds, and returns the number of requests that has happened in the past 3000 milliseconds (including the new request). Specifically, return the number of requests that have happened in the inclusive range [t - 3000, t].
// It is guaranteed that every call to ping uses a strictly larger value of t than the previous call.

typedef struct{
    int ans[10000];
    int f;
    int r;
}RecentCounter;

RecentCounter* recentCounterCreate(){
    RecentCounter* obj=(RecentCounter*)malloc(sizeof(RecentCounter));
    obj->f=0;
    obj->r=-1;
    return obj;
}

int recentCounterPing(RecentCounter* obj,int t){
    obj->ans[++obj->r]=t;
    while(obj->ans[obj->f]<t-3000)
        obj->f++;
    return obj->r-obj->f+1;
}

void recentCounterFree(RecentCounter* obj){
    free(obj);
}

/**
 * Your RecentCounter struct will be instantiated and called as such:
 * RecentCounter* obj = recentCounterCreate();
 * int param_1 = recentCounterPing(obj,t);
 * recentCounterFree(obj);
 */
