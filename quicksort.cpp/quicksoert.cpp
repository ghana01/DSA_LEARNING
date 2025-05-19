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
void quicksort(int arr[],int si,int ei){
    if(si>=ei) return;
     //5,1,8,2,7,6,3,4
     int pi=partition(arr,si,ei);
     //4,1,3,2,5,7,8,6
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);

}
int main(){
int arr[]={5,1,8,2,7,6,3,4};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
quicksort(arr,0,n-1);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}

