int maxArea(int* height, int n) {

    int area;
    int result=0;
    int left=0;
    int right=n-1;

    while (left<right){
        int breadth=right - left;
        int heights;
         if (height[left] < height[right]) {
            heights = height[left];
            left++;
        } else {
            heights = height[right];
            right--;
        }
        int area = heights * breadth;

        if (result < area) {
            result = area;
        }
        

    }
    return result;
}
