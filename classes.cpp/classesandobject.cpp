#include<iostream>
using namespace std;
class player{
    private:
    int health;
    int age;
    bool alive;

    public:
    int gethealth(){
        return health;
    }
    int getage(){
        return age;
    }
    int getscore(){
        return score;

    }
    int isalive(){
        return alive;
    }
    void sethealth(int health){
        this->health = health;
    }
    void setage(int age){
        this->age = age;
    }
    void setscore(int score){
       this->score = score;
    }
    void setisalive(bool alive){
       this->alive = alive;
    }
    void add(int a,int b){
        cout<<a+b;
    }

};
int main(){

    player harsh;//bject creation, staticalyy
    player raghav;//complete time,statics allocation
    player *urvi=new player;
    harsh.setage(21);
    harsh.setscore(100);
    harsh.setisalive(true);
    harsh.sethealth(70);

    raghav.setage(22);
    raghav.setscore(20);
    raghav.setisalive(true);
    raghav.sethealth(100);
    urvi->sethealth(20);
    cout<<urvi->gethealth()<<endl;
    




}

    
