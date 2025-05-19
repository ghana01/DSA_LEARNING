#include<iostream>
using namespace std;
class Hero{
    //properties
   private:
    int health;
    public:
    char *name;
    char level;
     static int timetocomplete;
    // default constructor
    Hero(){
        cout<<"simple construter"<<endl;
        name =new char[100];
    }
    // paramerterised construtor
     Hero(int health){
        this -> health=health;
     }
     Hero(int health,char level){
        this -> level=level;
        this -> health=health;
     }
     //copy  construter
     Hero(Hero& temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;

        cout<<"copy construter called"<<endl;
        this->health =temp.health;
        this->level =temp.level;
     }
    void print(){
        cout<<endl;
        cout<<"Name "<<this->name<< " ,";
        cout<<"health "<<this->health<<endl;
        cout<<"level "<<this->level<<endl;
        cout<<endl;
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
    void setName(char name[]){
        strcpy(this->name,name);
    }
    static int random(){
       return timetocomplete;
    }
    //destructor
    ~Hero(){
        cout<<"destructor bhai called"<<endl;
    }



};
int Hero ::timetocomplete=5;

int main(){
    cout<<Hero::timetocomplete<<endl;
    cout<<Hero::random()<<endl;
    //statics
    Hero a;
    cout<<a.timetocomplete<<endl;
    //dynamics
    Hero *b=new Hero();
    //manually destructor call
    delete b;
    return 0;

}