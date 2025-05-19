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
class LinkedList { // user defined data structer
       public:
       Node* head;
       Node* tail;
       int size;
       LinkedList(){
          head=tail=NULL;
          size=0;
     }
    void insertAttail(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp; 
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
     void insertAthead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
           temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertAtIdx(int idx,int val){
        if(idx<0 || idx>size){
            cout<<"Invalid index"<<endl;
            return;
        }
       else if(idx==0){
            insertAthead(val);
            return;
        }
       else if(idx==size){
            insertAttail(val);
            return;
        }
        else  {
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }


    }
    int getAtIdx(int idx){
        if(idx<0 ||idx>=size){
            cout<<"invalid Index";
            return -1;       
         }
         else if(idx==0)return head->val;
         else if(idx==size-1) return tail->val;
         else{
            Node* temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->val;
         }
         
    }
    void deleteAthead(){
        if(size==0){
            cout<<"your list is empty"<<endl;
        }
        else{
            head=head->next;
            size--;
        }
        
    }
    void deletAttail(){
        if(size==0){
            cout<<"list is empty";
            return;
        }
        Node* temp=head;
        while(temp->next !=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }
    void deleteAtidx(int idx){
        if(size==0){
            cout<<"list is empty";
            return;
        
        }
         else if(idx<0 ||idx>=size){
            cout<<"invalid index";
            return;
        }
        else if(idx==0) return deleteAthead();
        else if(idx==size-1) return deletAttail();
        else {
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;

        }
    }
    void display(){
         Node* temp=head;
         while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
         }
         cout<<endl;
    }


};
int main(){
    LinkedList ll;
    ll.insertAttail(10);//10->NULL
    ll.display();
    ll.insertAttail(20);//10->20->next->NULL
    ll.display();
    ll.insertAttail(30);//10->20->30->NULL
    ll.insertAttail(40);//10->20->30->40->NULL
    ll.display();
    ll.insertAthead(50);//50->10->20->30->40->NULL
    ll.display();
    ll.insertAthead(24);
      ll.display();
      ll.insertAtIdx(4,80);///24->50->10->20->80->30->40->NULL
      ll.display();
     // cout<<ll.getAtIdx(3);
      ll.deleteAthead();
      ll.display();
      ll.deletAttail();
      ll.display();
      ll.deleteAtidx(3);
      ll.display();

}