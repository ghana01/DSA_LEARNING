#include <iostream>
using namespace std;
class Node{ // DLL user defined data type
public:
    int val;
    Node* next;
    Node* prev;// for dll extra for dll;
    Node(int val){
       this->val=val;
       this->next=NULL;
       this->prev=NULL;
    }
};
 void display(Node* head){ //O(n)
         while(head){
            cout<<head->val<<" ";
            head=head->next;
         }
         cout<<endl;
}
void displayRev(Node* tail){ //O(1)
    while(tail){
        cout<<tail->val;
        tail = tail->prev;
    }
}
cout<<endl;

void displayRec(Node* head){ //O(n)
    if(head==NULL) return ;
    cout<<head->val<<" ";
    displayRec(head->next);
}
   cout<<endl;
void displayRecRev(Node* head){ //O(n)
    if(head==NULL) return ;
    
    displayRec(head->next);
    cout<<head->val<<" ";
}
   cout<<endl;
int main(){
    //10 20 30 40 50
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->prev=d;
    d->prev=c;
    c->prev=b;
    b->prev=a;
    display(a);
    cout<<a->val;
    displayRec(a);


}