#include<iostream>
using namespace std;
int f(int n){
    if(n==1 && n==1) return n;
    return f(n-1) + f(n-2);
}
int main(){
    int x;
    cin>>x;
    cout<<f(x);
   

}

