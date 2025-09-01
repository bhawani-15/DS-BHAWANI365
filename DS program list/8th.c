#include<stdio.h>
int main (){
    int a[100],b[100],m,n;
    printf("Enter size of 1st array:");
    scanf("%d",&m);
    printf("Enter the 1st sorted array:");
    for (int i = 0; i < m ; i++)
    {
      scanf("%d",&a[i]);  
    }
    printf("Enter size of 2nd array:");
    scanf("%d",&n);
    printf("Enter the 2nd sorted array:");
    for (int i = 0; i <n ; i++)
    {
      scanf("%d",&b[i]);  
    }
    int c[m+n];
    int i=0,j=0,k=0;
    while (i<m&&j<n){
        if(a[i]==b[j]){
            c[k]=a[i];
            c[k+1]=b[j];
            i++;
            j++;
            k=+2;
        }
        else if(a[i]<b[j]) {
            c[k]=a[i];
            i++;
            k++;
        }
        else if(a[i]>b[j]){
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<m){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<n){
        c[k]=b[j];
        j++;
        k++;
    }
    printf("The merged array is:");
    for(int x=0;x<m+n;x++){
        printf("%d ",c[x]);
    }
}