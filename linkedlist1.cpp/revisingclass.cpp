#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rno;
    float marks;
    student(string name,int rno,float marks){
       this->name=name;
       this->rno=rno;
       this->marks=marks;
    }   
};
void change(student* s){
    s->name="harsh";
}


int main(){
  //  student* s= new student("Harsh",76,92.6);
    student s("raghav",76,92.6);
    cout<<s.name<<endl;
     
     cout<<s.rno<<endl;
   // student* ptr=&s;
    //(*ptr).name="harsh";
    //ptr->name="harsh"
   // cout<<s.name<<endl;
   //  change(&s);
//cout<<s.name<<endl;
   //cout<<s->name<<endl;
  


}
