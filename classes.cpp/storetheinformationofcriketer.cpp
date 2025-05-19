#include<iostream>
using namespace std;
class cricketer{
    public:
    char name;
    int age;
    int nooftestmatches;
    int averagescore;

};
int main (){
    cricketer virat;
    virat.name='v';
    virat.age=30;
    virat.nooftestmatches=100;
    virat.averagescore=80;

    cricketer dhoni;
    dhoni.name='D';
    dhoni.age=48;
    dhoni.nooftestmatches=200;
    dhoni.averagescore=100;

    cricketer cricketer[2]={virat,dhoni};
for (int i=0;i<2;i++){
    cout<<cricketer[i].name<<endl;
    cout<<cricketer[i].age<<endl;
    cout<<cricketer[i].nooftestmatches<<endl;  
}



}