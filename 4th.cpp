#include<stdio.h>
/*int main(){
    int arr[100];
    int N,E,P;
    printf("Enter the number of elements in an array:");
    scanf("%d",&N);
    printf("Enter the array:");
    for ( int i = 0; i < N; i++)
    {
       scanf("%d",&arr[i]);
    }
    printf("Enter the element to be deleted:");
    scanf("%d",&E);
    for(int i=0;i<N;i++){
        if(arr[i]==E){
            P=i;
        }
    }
    for(int i=P;i<N-1;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<N-1;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}
/*ALGO FOR DUPLICATE ARRAY:
1.Input Size N and Array A 
2.Size = MAX(A,N)
3.Set Buffer [SIZE]={0}
4.For i <-- 0 to N-1 do
     Buffer [A[i]]++
5. Print the frequency of elements. */
int main (){
    int N,max,S,A[100];
    printf("Enter size of array:");
    scanf("%d",&N);
    printf("Enter the array:");
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    for (int i = 0; i < N-1; i++)
    {
        if (A[i]>A[i+1]){
            max=A[i];
            A[i+1]=A[i];
        }
        else if(A[i]<A[i+1]){
            max=A[i+1];
        }
    }
    S=max;
    int Buffer[S];
    for (int i = 1; i <= S; i++)
    {
      Buffer[i]=0;
    }
    for(int i=0;i<N-1;i++){
        Buffer[A[i]]++;
    }
    for(int i=0;i<N-1;i++){
    printf("%d appears %d times",A[i],Buffer[A[i]]);
    printf("\n");
    }
    return 0;
}