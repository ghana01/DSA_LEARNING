#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[6]={5,-4,-3,1,3,2};
    int n=6;
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    //bubble sort
    for(int i=0;i<n-1;i++){
        bool flag=false;
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false;
            }
        }
        if(flag==true){
            break;
        }
    }
     for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }




}