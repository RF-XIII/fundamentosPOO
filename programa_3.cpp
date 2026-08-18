#include <iostream>
#include <stdio.h>

float ConvertirGrados(float F){
    float c;
    c=(F-32)/1.8;
    return c;
}

int main(){
    float grados,res;
    printf("ingrese los grados Fahrenheit: ");
    scanf("%d",&grados);
    res = ConvertirGrados(grados);
    printf("grados celsius: %d",res);
    return 0;
}