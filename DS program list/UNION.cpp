#include<iostream>
using namespace std;
                      // ----UNION----
int main(){
int s1[100],s2[100],m,n;
cout<<"Enter the no. of elements in 1st set:";
cin>>m;
cout<<"Enter the elements:";
for(int i=0;i<m;i++){
    cin>>s1[i];
}
cout<<"Enter the no. of elements in 2nd set:";
cin>>n;
cout<<"Enter the elements:";
for(int i=0;i<n;i++){
    cin>>s2[i];
}
int U[m+n],A[m+n],F=0,found=0;
for(int i=0;i<m;i++){
    A[i]=s1[i];
}
int k=m;
for(int j=0;j<n;j++){
    A[k]=s2[j];
    k++;
}
U[0]=A[0];
 k=1;
for(int i=1;i<m+n;i++){
    found=0;
  for(int j=i-1;j>=0;j--){
     if(A[j]==A[i]){
         found++;
         F++;
     }
  }
  if (found==0){
    U[k]=A[i];
    k++;
 }
}
cout<<"The union of the sets is:";
for(int i=0;i<m+n-F;i++){
    cout<< U[i];
    cout<<" ";
}
return 0;
}
    