#include <stdio.h> 
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100
 
 
 
int main (){
 
    //Variabili
    int n;
    char parola[MAX];
    int temp;
 
 
 
 
    
    //Input
    scanf("%d",&n);
    
 
 
 
 
 
 
    //Elaborazione
    for(int i=0;i<n;i++){
 
        scanf("%s",parola);
        if(strlen(parola)>10){
            temp=strlen(parola)-2;
            printf("%c%d%c\n",parola[0],temp,parola[strlen(parola)-1]);
        }
        else{
            printf("%s\n",parola);
        }
 
    }
    
 
 
 
 
 
 
 
 
 
    //OutPut
 
 
 
 
 
 
 
    
 
 
    return 0;
}