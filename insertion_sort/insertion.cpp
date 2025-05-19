#include<iostream>
using namespace std;
int main(){
    
    int n=5;
    int arr[]={5,3,1,4,2};
    // insertion sort
    for(int i=1;i<=n-1;i++){
        int j=1;
        // while(j>=1){
        //     if(arr[j]>=arr[j-1]) break;
        //     else swap(arr[j],arr[j-1]);
        //     j--;
        // }
        while( j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}