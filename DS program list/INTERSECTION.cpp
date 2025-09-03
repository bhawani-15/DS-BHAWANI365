#include<iostream>
using namespace std;
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
for(int i=0;i<m;i++){
   for(int j=0;j<n;j++){
    if(s1[i]==s2[j]){
       found=0;
       for(int y=k;y>=0;y--){
       if(I[y-1]==s1[i]){
         found++;
         break;
        }
    }
       if(found==0){
         I[k]=s1[i];
         k++;
        }
  }
 }
}
cout<<"The Intersection is: ";
for(int i=0;i<k;i++){
    cout<<I[i]<<" ";
}
return 0;
}