
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int nums3Size = nums1Size+nums2Size;
    int *nums3 = (int *) malloc(sizeof(int)*nums3Size);
    int j=0, k=0;
    
    if (nums1Size == 0) {
        for (int i=0; i < nums2Size; i++) {
            nums3[i] = nums2[i];
        }
    }
    else if (nums2Size == 0) {
        for (int i=0; i < nums1Size; i++) {
            nums3[i] = nums1[i];
        }
    }
    else {
        for (int i=0; i < nums3Size; i++) {
            if (k == nums2Size && j < nums1Size){
                nums3[i] = nums1[j];
                j++;
            }
            else if (j == nums1Size && k < nums2Size) {
                nums3[i] = nums2[k];
                k++;
            }
            else if (nums2[k] < nums1[j]) {
                nums3[i] = nums2[k];
                k++;
            }
            else if (nums1[j] <= nums2[k]){
                nums3[i] = nums1[j];
                j++;
            }
        }
    }
    if (nums3Size == 1)
        return nums3[0];
   else if (nums3Size % 2 == 0) {
       int index = nums3Size/2;
       double median = (nums3[index-1]+nums3[index])/(double) 2;
       return median;
   }
    else {
        printf("odd\n");
        return nums3[nums3Size/2];
    }
    return -1;
}
