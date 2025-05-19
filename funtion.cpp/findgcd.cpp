//write a functon to compute gcd of two given no.
#include<iostream>
using namespace std;
int gcd(int a,int b){
    int hcf=1;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
     }
    return hcf; 
}
int main(){
    int a;
    cout<<"enter the 1st no"<<endl;
    cin>>a;
    int b;
    cout<<"enter the 2nd no"<<endl;
    cin>>b;
    int d= gcd(a,b);
    cout<<d;
}