#include <stdio.h>
void bubbleSort(int arr[], int len){
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
}

int main()
{
    int a[5]={2,1,5,3,9};
    bubbleSort(a,5);
    for(int i;i<5;i++){
        printf("%d",a[i]);
    }
    
}
