// You are given a directed graph of n nodes numbered from 0 to n - 1, where each node has at most one outgoing edge.

// The graph is represented with a given 0-indexed array edges of size n, indicating that there is a directed edge from node i to node edges[i]. If there is no outgoing edge from i, then edges[i] == -1.

// You are also given two integers node1 and node2.

// Return the index of the node that can be reached from both node1 and node2, such that the maximum between the distance from node1 to that node, and from node2 to that node is minimized. If there are multiple answers, return the node with the smallest index, and if no possible answer exists, return -1.

// Note that edges may contain cycles.

int closestMeetingNode(int* edges,int edgesSize,int node1,int node2){
    int dist1[edgesSize],dist2[edgesSize];
    for(int i=0;i<edgesSize;i++) dist1[i]=dist2[i]=-1;

    int curr=node1,d=0;
    while(curr!=-1&&dist1[curr]==-1){
        dist1[curr]=d++;
        curr=edges[curr];
    }

    curr=node2;
    d=0;
    while(curr!=-1&&dist2[curr]==-1){
        dist2[curr]=d++;
        curr=edges[curr];
    }

    int ans=-1,minDist=1000000000;
    for(int i=0;i<edgesSize;i++){
        if(dist1[i]!=-1&&dist2[i]!=-1){
            int x=dist1[i]>dist2[i]?dist1[i]:dist2[i];
            if(x<minDist){
                minDist=x;
                ans=i;
            }
        }
    }
    return ans;
}
