void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    for(int i=0;i<n;i++){
        int x=nums2[i];
        int j=m-1;
        
            while(j >= 0 && x < nums1[j]){
                
                nums1[j+1]=nums1[j];

                j--;
            }
            
            
            nums1[j+1]=x; 
        m++;
    }
}

