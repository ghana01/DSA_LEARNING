#include<iostream>
#include<queue>
using namespace std;






int main(){
    vector<int>h ={9,6,1,19,3,2,8,12,5};
    int arr[]= {9,6,1,19,3,2,8,12,5};
    priority_queue<int>hp;//maxheap
    priority_queue<int,vector<int>,greater<int>>hp; //minheap
    priority_queue<int,vector<int>,greater<int>>minhpvector(h.begin(),h.end());; //minheap
     priority_queue<int>maxhparray(arr,arr+9);//maxheap
    hp.push(3);
    hp.push(4);
    hp.push(11);
    hp.push(9);
    hp.push(14);
    hp.push(-1);
    hp.push(30);
    hp.push(44);
    hp.push(50);
     
    cout<<hp.top();

    return 0;
}