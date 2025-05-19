#include<iostream>
using namespace std;
class Hero{
    //properties
   private:
    int health;
    public:
    char level;
    // default constructor
    Hero(){
       cout<<"constructor called"<<endl;
    }
   // paramerterised construtor
      Hero(int health){
         cout<<"this ->"<<this<<endl;
         this -> health=health;
    }
    Hero(int health,char level){
          this -> level=level;
          this -> health=health;
    }
    //copy constructer
    Hero(Hero& temp){
        this->health=temp.health;
        this->level=temp.level;
    }

    void print(){
        cout<<"health "<<this->health<<endl;
        cout<<"level"<<this->level<<endl;
     }
    int getHealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void setHealth(int h){
        health =h;
    }
    void setLevel(char ch){
        level=ch;
    }



};
int main (){

    Hero s(70,'C');
    s.print();
    //copy constructer
    Hero R(s);
    R.print();
    //statics allocation
   // Hero ramesh(10);
   // cout<<"addres of ramesh "<<&ramesh<<endl;
   // ramesh.print();
    //statics allocation
  //  Hero* h=new Hero(11);
    // h->print();
    // Hero temp(22,'B');
    // temp.print();


 
    
    //statics allocation 
   /*/ Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout<<"level is "<<a.level<<endl;
    cout<<"health is "<<a.getHealth()<<endl;


    //statics allocation
    
    Hero *b=new Hero;
    b->setLevel('A');
    b->setHealth(70);
    cout<<"level is "<<(*b).level<<endl;
    cout<<"health is "<<(*b).getHealth()<<endl;*/


}