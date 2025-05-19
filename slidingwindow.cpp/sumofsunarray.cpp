#include<iostream>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    //brute force
    /*int maxsum=INT8_MIN;
    for(int i=0;i<=n-k;i++){
       int sum=0;
       for(int j=i;j<i+k;j++){
        sum+=arr[j];
       }
       maxsum=max(maxsum,sum);
    }
    cout<<maxsum;*/
    int maxsum=INT8_MIN;
    int prevsum=0;
    for(int i=0;i<k;i++){
        prevsum+=arr[i];
    }
    maxsum=prevsum;
    //sliding window
    int i =1;
    int j=k;
    while(j<n){
        int currsum=prevsum+arr[j]-arr[i-1];
        if(maxsum<currsum){
            maxsum=currsum;
        }
        prevsum=currsum;
        i++;
        j++;
    }
    cout<<maxsum<<endl;
}