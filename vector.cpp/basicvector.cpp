#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(4,3);
    v.push_back(9);
    v.push_back(8);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
