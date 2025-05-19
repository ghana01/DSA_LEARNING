#include<iostream>
using namespace  std;
int findelementindex(int arr[],int size,int element,int index){
    if(index==size) return -1;// if element not found
    if(arr[index]==element) return index;
    findelementindex(arr,size,element,index+1);


}

int main(){
    int arr[]={2,4,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int element=3;
    int index=findelementindex(arr,size,element,0);
    if(index!=-1){
        cout<<"element"<<element<<"index"<<index<<endl;
    
    }
    else{
         cout<<"element "<<element<<"   not found in arr";
    }



}

