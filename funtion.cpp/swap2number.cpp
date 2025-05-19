#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return ;
}
//m=1
int main(){
    int a,b;
    cin>>a>>b;
   /*int temp=a;
   a=b;
   b=temp;
   cout<<a<<" "<<b; 
   //m=2 using + -
   b=a+b;
   a=b-a;
   b=b-a;
   cout<<a<<" "<<b;*/
   // m=3 using call by refrence in function we can't use call by value cuz the actual parameter value will not bw swap
   swap(&a,&b);
   cout<<a<<" "<<b;


}