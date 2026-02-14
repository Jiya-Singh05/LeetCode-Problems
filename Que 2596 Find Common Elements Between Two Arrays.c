/*You are given two integer arrays nums1 and nums2 of sizes n and m, respectively. Calculate the following values:
answer1 : the number of indices i such that nums1[i] exists in nums2.
answer2 : the number of indices i such that nums2[i] exists in nums1.
Return [answer1,answer2].*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findIntersectionValues(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int* result=(int*)malloc(2*sizeof(int));
    int first=0,second=0;
    *returnSize=2;
    for(int i=0;i<nums1Size;i++) {
        for(int j=0;j<nums2Size;j++) {
            if(nums1[i]==nums2[j])  { first++;
            break;
            }
        }
        }
         for(int i=0;i<nums2Size;i++) {
        for(int j=0;j<nums1Size;j++) {
            if(nums2[i]==nums1[j]) { second++;
            break;
        }
        }
    }
    result[0]=first;
    result[1]=second;
    return result;
}
