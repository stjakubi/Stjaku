#include "library.h"
#include "math.h"
#include <stdio.h>

int main(){
    int X;
    int Y;
    int R;
    int X0;
    int Y0;
    float L;
    printf("Sisestage X:");
    scanf("%d",&X);
    printf("Sisestage Y:");
    scanf("%d",&Y);
    printf("Sisestage R:");
    scanf("%d",&R);
    printf("Sisestage X0:");
    scanf("%d",&X0);
    printf("Sisestage Y0:");
    scanf("%d",&Y0);
    printf("X on %d",X);
    printf("\nY on %d",Y);
    L=sqrt((X0-X)^2+(Y0-Y)^2);
    if(L>R){
        printf("\nPunkt asub väljaspool ringi");
    }else{
        printf("\nPunktide kaugus on %f",L);
    }
}

