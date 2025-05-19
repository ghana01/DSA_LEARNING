#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>& st){
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
          st.pop();
    }
    //putting element back from temp to 1st
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}
void pushAtBottom(stack<int>& st,int val){
    stack<int>temp;
     while(st.size()>0){
        temp.push(st.top());
          st.pop();
    }
    st.push(val);
     while(temp.size()>0){
        st.push(temp.top());
          temp.pop();
    }

}
int main(){
    stack<int>st;
    st.push(10);// 1
    st.push(20);// 2 
    st.push(30);// 3
    st.push(40);// 4
    st.push(50);
    print(st);
    cout<<endl;
    pushAtBottom(st,80);
    print(st);
}