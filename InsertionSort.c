#include <stdio.h>

void insertSort(int A[],int n){
    for(int i=1;i<n;i++){
        int  j=i-1;
        int  x=A[i];
        while(j>-1 && A[j]>x){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
}

int main()
{
    int a[5]={8,3,6,9,1};
    insertSort(a,5);
    for(int j=0;j<5;j++){
        printf("%d ",a[j]);
    }
   
}
