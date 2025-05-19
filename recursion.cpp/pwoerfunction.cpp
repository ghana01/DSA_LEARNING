#include<iostream>
using namespace std;
int power(int x,int n){
    if(n==1) return x;
    int ans=power(x,n/2);
    if(n%2==0){
   return ans*ans;
    }
     else if(n%2!=0){
    return x*ans*ans;
    }
}
int main (){
    int x,n;
    cin>>x>>n;
    cout<<endl;
    power(x,n);
    cout<<power(x,n);
}



