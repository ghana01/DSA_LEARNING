#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
       this->val=val;
       this->next=NULL;
    }
};
 void display(Node* head){
    Node* temp=head;
     while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
 }
 int size(Node* head){
    Node* temp=head;
    int n=0;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }
    return n;
 }
 void revDisplay(Node* head){// we  use the recursive function here cuz it is easy to print linkedlist in revers through recursion
    if(head==NULL) return;
    display(head->next);
    cout<<head->val<<" ";
 }
/*/ void displayrec(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayrec(head->next);
 }*/

  
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    
    cout<<a->val<<endl;
   //cout<<a->next->next->next->val<<endl;
   // Node* temp=a;
    //while(temp!=NULL){
       // cout<<temp->val<<" ";
       // temp=temp->next;
    //}
    cout<<endl;
    display(a);
    //cout<<size(a)<<endl;
    //displayrec(a);
    //revDisplay(a);



}