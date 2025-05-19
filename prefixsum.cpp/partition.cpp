//: Check if array can be partitioned into 2 continuous 
//arrays of equal sum
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,5,10};
    int n= sizeof(arr)/sizeof(arr[0]);
    //formation of prefix sum
    for(int i=1;i<n;i++){
        arr[i] +=arr[i-1];
    }
    //check if any exists
    int idx =-1;
    for(int i=1;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            idx =i;
            break;
        }
    }
    if(idx!= -1) cout<<"yes it can be partitioned after "<<idx;
    else cout<<"cannot be partitioned";
}