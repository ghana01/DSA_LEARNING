//Given n friend each one can remain single or paired upwith some other freinds .
// each friends can be pired only once. find out the total No of ways in 
//which friends can remain single or can be paired up
#include<iostream>
using namespace std;
 int f(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return f(n-1) + ((n-1)*f(n-2));
 }
int main (){
int n;
cin>>n;
cout<<f(n);
}