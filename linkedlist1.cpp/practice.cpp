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
    Node* deleteMiddle(Node* head) {
        if (head == NULL || head->next == NULL) return NULL;
        int length = 0; 
        //step 1 calculate length list
        Node* temp = head; 
        while (temp != NULL) { 
            length++; 
            temp = temp->next;
        }
        // find middle position
        int middle = length / 2;
        //traverse the node just before middle position
        Node* c = new Node(100);
        Node* curr =head;
        for(int i=0;i<=middle-1;i++){
            c->next=curr;
            c=c->next;
            curr=curr->next;
        }
        // remove middle node
        c->next=curr->next;
        
        return c->next;
    } 

int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    Node* f=new Node(60);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    display(a);
    cout<<endl;
    deleteMiddle(a);
    display(a);
    
    
   
    
    



}