#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={3,1,2,5,4,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
     stack<int>st;
    int pge[n];
    pge[0]= -1;
    st.push(arr[n-1]);
    for(int i=1;i<=n-1;i++){
        //pop all the element smaller than aee[i]
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        // mark the ans in nge array
        if(st.size()==0) pge[i] =-1;
     
        else pge[i]= st.top();
        //push the arr[i]
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<pge[i]<<" ";
    }
    cout<<endl;
}    