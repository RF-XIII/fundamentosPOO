#include "sensores.h"
#include <iostream>

using namespace std;

void sensores::detectar()
{
    cout<<"comprobando sensores"<<endl;
    cout<<"OK"<<endl;
}
int main(){
    sensores sen1;
    sen1.detectar();
}
