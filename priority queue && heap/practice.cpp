#include<iostream>
#include<vector>
using namespace std;

class maxheap {
    vector<int>heap;
 public:
    void upheapify(int child){
        while(child>0){
            int parent =(child-1)/2;
            if(heap[parent]<heap[child]){
                swap(heap[parent],heap[child]);
                child =parent;
            }else{
                break;
            }
        }
    }
    void downheapify(int idx){
        while(idx<heap.size()){
            int left =2*idx+1;
            int right=2*idx+2;
            int maxel=idx;
            if(left<heap.size() && heap[left]>heap[maxel]){
                maxel=left;
            }
            if(right<heap.size() && heap[right]>heap[maxel]){
                maxel=right;
            }
            if(maxel!=idx){
                swap(heap[maxel],heap[idx]);
                idx=maxel;
            }
        }
    }
    //when we insert the elemmet
    void push(int element){
        heap.push_back(element);
        upheapify(heap.size()-1);
    }
    //when we remove the elment 
    void pop(){
        if(heap.size()==0) return;
        swap(heap[0],heap[heap.size()-1]);
        heap.pop_back();
        downheapify(0);
    }
};




int main (){

}