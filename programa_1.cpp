#include <iostream>
#include <stdio.h>

int main(){
    int fecha;
    printf("ingrese su año de nacimiento: ");
    scanf("%i",&fecha);
    if (fecha>=1981 && fecha<=1993)
    {
        printf("su generacion es: generacion millennial");
        
    }
    if (fecha>1993 && fecha<=2010)
    {
        printf("su generacion es: generacion z");
    }
    else{
        printf("no es generacion millennial ni z");
    }
    return 0;
}