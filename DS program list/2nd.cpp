#include<stdio.h>
int main (){
    int E,N,p;
    int arr[100];
    printf("Enter the number of elements in the array:");
    scanf("%d",&N);
    printf("Enter the array:");
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be inserted:");
    scanf("%d",&E);
    printf("Enter position:");
    scanf("%d",&p);
    for(int i=N;i>N-p-1;i--){
        arr[i+1]=arr[i];
    }
    arr[p-1]=E;
    for(int i=0;i<N+1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}