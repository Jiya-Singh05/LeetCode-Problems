// In a town, there are n people labeled from 1 to n. There is a rumor that one of these people is secretly the town judge.

// If the town judge exists, then:

// The town judge trusts nobody.
// Everybody (except for the town judge) trusts the town judge.
// There is exactly one person that satisfies properties 1 and 2.
// You are given an array trust where trust[i] = [ai, bi] representing that the person labeled ai trusts the person labeled bi. If a trust relationship does not exist in trust array, then such a trust relationship does not exist.

// Return the label of the town judge if the town judge exists and can be identified, or return -1 otherwise.

int findJudge(int n,int** trust,int trustSize,int* trustColSize){
    int i[n+1],u[n+1];
    for(int j=0;j<=n;j++){
        i[j]=0;
        u[j]=0;
    }
    for(int j=0;j<trustSize;j++){
        int a=trust[j][0];
        int b=trust[j][1];
        u[a]++;
        i[b]++;
    }
    for(int j=1;j<=n;j++){
        if(i[j]==n-1&&u[j]==0)
            return j;
    }
    return -1;
}
