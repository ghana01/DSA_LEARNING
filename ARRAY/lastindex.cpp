#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v(5);
    v[0]=3;
    v[1]=4;
    v[2]=5;
    v[3]=2;
    v[4]=5;
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    int x=2;
    int idx=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x) {
            idx = i;
        }
    }
    cout<<endl;
    cout<<idx;
    

}