#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f *=i;
    }
    return f;
}
int main (){
    int n;
    cout<<"input the value of n";
    cin>>n;
     int r;
    cout<<"input the value of r";
    cin>>r;
    int nfact=fact(n);
    int rfact=fact(r);
    int ncr=fact(n)/(fact(r)*fact(n-r));
    cout<<ncr5;
    
    

    
}