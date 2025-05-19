#include<iostream>
using namespace std;
int printsumtriangle(int arr[],int size, int idx){
    if(size==0) return ;
    for(int idx=0;idx<size,idx+1){
        sum=arr[idx]+arr[idx+1]
    }
    printsumtriangle(arr,size-1,int idx);

}
int main(){
    int arr[]={5,4,3,2,1}
    int size=sizeof(arr)/sizeof(arr[0]);
    printsumtriangle(arr,size,0);

}

