#include<iostream>
class calculator{
    public:
    int a;
    int b;
    void add(){ 
        cout<<a+b;  
    }
    void substract(){
        cout<<a-b;
    }
};
using namespace std;
int main(){
  calculator calci;
  calci.a=18;
  calci.b=7;
  calci.add();
}