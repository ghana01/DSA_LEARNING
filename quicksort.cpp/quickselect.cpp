#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    //int pivotElement=arr[si];
    int pivotElement=arr[(si+ei)/2];
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotElement) count++;
    }
    int pivotidx=count+si;
    swap(arr[(si+ei)/2],arr[pivotidx]);
    int i=si;
    int j=ei;
    while(i<pivotidx &&j>pivotidx){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
void kthsmallest(int arr[],int si,int ei,int k){
     int pi=partition(arr,si,ei);
    kthsmallest(arr,si,pi-1,k);
    kthsmallest(arr,pi+1,ei,k);
}

int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    cout<<endl;
    int k=3;
    cout<<kthsmallest(arr,0,n-1,k);
    
}  
