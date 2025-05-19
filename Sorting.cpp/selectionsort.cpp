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
    //selection sort
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int indx=-1;
        //to find minimum elememtn of array
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                indx=j;
            }
            swap(arr[i],arr[indx]);
        }
        
    }
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
}