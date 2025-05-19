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
int MinValue(Node* root){
    if(root==NULL) return INT_MAX;
    int left=MinValue(root->left);
    int right=MinValue(root->right);


    return min(root->val,min(left,right));
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
    
   MinValue(a);

}