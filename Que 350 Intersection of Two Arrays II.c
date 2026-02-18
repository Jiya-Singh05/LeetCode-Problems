/*Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int* result=(int*)malloc(1000*sizeof(nums1[0]));
    int k=0;
    for(long i=0; i<nums1Size;i++) {
        for(long j=0;j<nums2Size;j++) {
            if(nums1[i]==nums2[j]){
                result[k]=nums2[j];
                nums2[j]=1234567890;
                k++;
                break;
            }
        }
    }
    *returnSize=k;
    return result;
}
