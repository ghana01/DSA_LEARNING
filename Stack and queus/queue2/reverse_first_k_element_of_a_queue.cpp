#include<iostream>
#include<queue>
#include<stack>
using namespace std;
 void reverseKelement(queue<int> & q,int k){
    stack<int>st;
    for(int i=0;i<k;i++){
        int x=q.front();
        q.pop();
        st.push(x);
    }
    //empty the stack into queu
    while(st.size()>0){
        int x=st.top();
        st.pop();
        q.push(x);
    }
    for(int i=0;i<q.size()-k;i++){
        int x=q.front();
        q.pop();
        q.push(x);
    }
 }
 void display(queue<int> &q){
    int n=q.size();
    for(int i=1;i<=n;i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

int main(){
      queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    display(q);
    reverseKelement(q,3);
    display(q);
}
  

