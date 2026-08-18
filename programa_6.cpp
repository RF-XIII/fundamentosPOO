#include <iostream>
#include <stdio.h>

int horas(int seg){
    int rhr;
    rhr= seg/3600;
    return rhr;
}

int minutos(int seg){
    int rmin;
while (seg>3600)
{
    seg=seg-3600;
}
    rmin=seg/60;
    return rmin;
}

int main(){
    int segundos,hr,min;
    printf("ingrese los segundos: ");
    scanf("%d",&segundos);
    hr=horas(segundos);
    min=minutos(segundos);
    printf("%i segundos son: %ih, %imin",segundos,hr,min);
}