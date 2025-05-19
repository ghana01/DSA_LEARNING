#include<iostream>
using namespace std;
class Hero{
    //properties
   private:
    int health;
    public:
    char *name;
    char level;
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



};
int main(){
    Hero hero1;
    hero1.sethealth(12);
    hero1.setlevel('D');
    char.setName(name);
    hero1.print();
     // use default copy constructer
     Hero hero2(hero1);
     Hero2.print();
     // Hero hero2 =hero1;
     hero1.name= 'G';
     hero1.print();
     hero2.print();









    /*Hero S(70,'C');
    S.print();
    //copy construter
    Hero R(S);
    R.print();*/
}