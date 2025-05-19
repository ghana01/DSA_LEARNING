//Given a no n, you can perform any operation
// of the follwing ops on it some no of times
//1.reduced to n-1;
//2.if n is divisible by 2 then make it n/2;
//3.if n is divisible by 3 then make it n to n/3;
#include<iostream>
#include<vector>
#define inf INT_MAX
using namespace std;

int f(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    if(n==3) return 1;
    return 1+min({f(n-1),(n%2==0) ? f(n/2) : inf,(n%3==0) ? f(n/3): inf});
}
int main (){
int n;
cin>>n;
return 0;
}