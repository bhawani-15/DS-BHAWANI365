#include<iostream>
using namespace std;
int main(){
    int E,N,p;
    int arr[100],rev[100];
    cout<<"Enter the no. of elements in 1st set:";
    cin>>N;
    cout<<"Enter the elements:";
for(int i=0;i<N;i++){
    cin>>arr[i];
}
    int k=0;
        for(int j=N-1;j>=0;j--){
           rev[j]=arr[k];
           k++;
        }
    cout<<"Original array: ";
    for(int i=0;i<N;i++){
    cout<< arr[i];
    cout<<" ";
    }
    cout<<endl<<"The reverse of the set is: ";
    for(int i=0;i<N;i++){
    cout<< rev[i];
    cout<<" ";
    }
   return 0;
}