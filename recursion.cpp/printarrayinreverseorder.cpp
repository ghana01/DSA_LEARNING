//Print all the elements of an array in reverse order.

#include<iostream>
using namespace std;
void reversearr(int arr[],int n){
    if(n==0) return ;
    cout<<arr[n-1]<<"";
    reversearr(arr,n-1);
}
int main (){
    int arr[]={2,4,6,5,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    reversearr(arr,n);
    return 0;
}