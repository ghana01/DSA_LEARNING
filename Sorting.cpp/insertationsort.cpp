#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[6]={5,-8,6,-1,3,2};
    int n=6;
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    //insertaion sort
    for(int i=1;i<=n-1;i++){
        for(int j=i;j>=1;j--){
            if(arr[j]>=arr[j-1]) break;
            else{
             swap(arr[j],arr[j-1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}