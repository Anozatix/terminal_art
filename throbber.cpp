#include <iostream>
#include <windows.h>
#include <stdlib.h>
using namespace std;
int main(){
    char screen[11][12];
    for (int i=0; i<11; i++){
        for (int j=0; j<12; j++)screen[i][j]=' ';}
    int coordinates[28][2]={{0,4},{0,5},{0,6},{0,7},{0,8},{1,9},{2,10},{3,11},{4,11},{5,11},{6,11},{7,11},{8,10},{9,9},
    {10,8},{10,7},{10,6},{10,5},{10,4},{9,3},{8,2},{7,1},{6,1},{5,1},{4,1},{3,1},{2,2},{1,3}};
    int tail=0,head=5,len=6;
    while (1){
    system("cls");Sleep(20);
    if (head<5){for (int i=0;i<=head; i++)screen[coordinates[i][0]][coordinates[i][1]]='x';
    for (int i=tail;i<=27; i++)screen[coordinates[i][0]][coordinates[i][1]]='x';}
   
    else{screen[coordinates[tail][0]][coordinates[tail][1]]='x';
    for (int i=tail+1;i<=tail+3;i++ )screen[coordinates[i][0]][coordinates[i][1]]='x';
    screen[coordinates[head][0]][coordinates[head][1]]='x';}
    
    
    for (int i=0; i<=11; i++){
        for (int j=0; j<=11; j++){cout<<screen[i][j];}cout<<endl;}
    if (tail==0){screen[coordinates[27][0]][coordinates[27][1]]=' ';}
    else{screen[coordinates[tail-1][0]][coordinates[tail-1][1]]=' ';}
    
    if (tail==27){tail=0;}else{tail+=1;}
    if (head==27){head=0;}else{head+=1;}
    }
}