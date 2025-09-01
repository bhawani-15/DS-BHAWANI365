#include<stdio.h>
// using namespace std;
int main(){
int arr[]={2,4,6,8,10};
int N= sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<N;i++){
    printf("%d ",arr[i]);
}
return 0;
}