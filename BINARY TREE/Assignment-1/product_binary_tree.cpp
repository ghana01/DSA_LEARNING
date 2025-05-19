#include<iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
int  BinaryProduct(Node* root,int* mul){
    if(root==NULL) return 1;
   ( *mul) *=root->val;
    BinaryProduct(root->left,mul);
    BinaryProduct(root->right,mul);

}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    int mul=1;
    BinaryProduct(a,&mul);
    cout<<mul;

}