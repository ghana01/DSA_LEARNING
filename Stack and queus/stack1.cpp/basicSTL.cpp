#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    cout<<st.size()<<endl;
    st.push(10);// 1
    st.push(20);// 2 
    st.push(30);// 3
    st.push(40);// 4
    cout<<st.size()<<endl;// 4
   // st.pop();// 3
   cout<<st.top()<<" ";
    cout<<st.size()<<endl;// 3
    //pritning in reverse order-> empty the stack
    // while(st.size()>0){
    //     cout<<st.top()<<"  ";
    //     st.pop();
    // }
    stack<int>temp;
    //we will use extra stack
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    //putting element back from temp to 1st
    while(temp.size()>0){
        int x=temp.top();
        temp.pop();
        st.push(x);
    }
}

