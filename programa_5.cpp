#include <iostream>
#include <stdio.h>

int main(){
    int i,j;
    int matriz[3][3]= {{1,0,0},{0,1,0},{0,0,1}};
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}