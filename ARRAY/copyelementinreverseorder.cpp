#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1;
    vector<int>v2;
    v1.push_back(4);
    v1.push_back(6);
    v1.push_back(3);
    v1.push_back(7);
    v1.push_back(8);
    v1.push_back(9);
    for(int i=0; i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    int i=0;
    int j=v1.size()-1;
    while(i+j == v1.size()-1){
        v2.push_back(v1[j]);
        i++;
        j--;
    }
    cout<<endl;
    for(int k =0;k<v2.size()-1;k++){
        cout<<v2[k]<<" ";
    }
}