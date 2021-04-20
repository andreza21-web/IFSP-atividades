#include <iostream>
#include <time.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int naipes;
int faces;
int i;

int main(){
    srand(time(NULL));

char naipes[4][8] = {"Copas","Espadas","Paus","Ouros"}; 
char faces[13] ={'a','2','3','4','5','6','7','8','9','j','k','Q'};

for(i = 0; i<11; i++ ){
   cout <<"\nmaria tem :" << faces[rand()%13]<<" de " << naipes[rand()%4] ;
}
for(i = 0; i<11; i++ ){
   cout <<"\ncaio tem :" << faces[rand()%13]<<" de " << naipes[rand()%4];
}
for(i = 0; i<11; i++ ){
   cout <<"\nfernanda tem :" << faces[rand()%13]<<" de " << naipes[rand()%4];
}
for(i = 0; i<11; i++ ){
   cout <<"\nlarissa tem :" << faces[rand()%13]<<" de " << naipes[rand()%4];

}
return 0;

}