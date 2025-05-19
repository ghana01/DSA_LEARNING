#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
int reverse(int i, int j, vector<int> &v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return ;
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    v.push_back(8);
    int n = v.size();

    int k =2;
    if(k>n){
        k= k%n;
    }
    if(k=n){
        cout<<"same array";
    }
    reverse(0,n-k-1,v);
    reverse(n-k,n-1,v);
    reverse(0,n-1,v);
    display(v);
}