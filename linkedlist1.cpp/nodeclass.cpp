#include<iostream>
using namespace std;
class Node{ //user defined data type
    public:
    int val;
    Node* next;
    Node(int val){
       this->val=val;
       this->next=NULL;
    }


};

int main (){
    // 10 20 30 40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // forming all
    a.next=&b;
    b.next=&c;
    c.next=&d;
    
    cout<<(*(a.next)).val<<endl;
    cout<<(a.next)->val<<endl;
    cout<<((a.next)->next)->val<<endl;
    //print karani hain d ki value
   // cout<<(*((*((*(a.next)).next)).next)).val<<endl;
    cout<<(((a.next)->next)->next)->val<<endl;
    Node temp=a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp=*(temp.next);
    }
}