#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    int n = v.size();
     for(int i =0;i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int noo =0;
    int noz=0;
     for(int i =0;i<n; i++){
        if(v[i]==0) noz++;
        else noo++;
    }
    for(int k =0 ;k<n;k++){
        if(k<noz) v[k]=0;
        else v[k]=1;
    }
     for(int i =0;i<v.size(); i++){
        cout<<v[i]<<" ";
    }

}