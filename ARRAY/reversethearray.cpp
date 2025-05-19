#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>v;
    v.push_back(4);
    v.push_back(5);
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);
    v.push_back(2);
    v.push_back(1);
    for(int i =0;i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int i=0;
    int j =4;
    while(i<=j){
        int temp =v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
     for(int i =0;i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}