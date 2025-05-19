#include<iostream>
using namespace std;
int main(){
    int arr[6]={5,-4,0,3,26,20};
    int n=6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // // bubble sort
    // for(int i=0;i<n-1;i++){
    //     //traverse
    //     for(int j=0;j<n-1-i;j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }
     // bubble sort optemise
    for(int i=0;i<n-1;i++){//n-1
        //traverse
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag= false;
            }
        }
        if(flag==true){// swap didnt happen
            break;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}