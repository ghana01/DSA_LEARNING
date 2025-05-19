#include<iostream>
using namespace std;
int pastri( int n){
    for(int i=0;i<=n;i++){
        int curr=1;
        for(int j=0;j<=i;j++){
            cout<<curr<<" ";
            curr=curr*(i-j)/(j+1);

        }
        cout<<endl;
    }
}
int main (){
    int a;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    pastri(a);

}