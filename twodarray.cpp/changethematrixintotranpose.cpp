#include<iostream>
using namespace std;
int main(){
    int mat[4][4]={{1,2,3,4},{5,6,7,89},{9,8,7,5},{3,4,6,1}};
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            int temp=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=temp;
            
        }
    }
     for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<mat[i][j];
        }
        cout<<endl;
     }
    
}