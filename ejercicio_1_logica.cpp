#include <iostream>

#define N_PERSONNA 5 

using namespace std;

void mayor_menor();

int main(){
    mayor_menor();
    return 0;
}

void mayor_menor(){
    int edad[N_PERSONNA];
    int max = 0,j,min = 999,k;
    for (int i = 1; i <= N_PERSONNA; i++)
    {
        cout<<"ingrese la edad de la persona "<<i<<": ";
        cin>>edad[i];
    }
    for (j = 2; j <= N_PERSONNA; j++)
    {
        if (edad[j]>edad[j-1] && edad[max]<edad[j])
            max=j;
        
    }
    for (k = 2; k <= N_PERSONNA; k++)
    {
        if (edad[k]<edad[k-1] && edad[min]>edad[k])
            min=k;
        
    }
    cout<<"la persona con mayor edad se encuentra en :"<<max<<" con la edad:"<<edad[max]<<endl;
    cout<<"la persona con menor edad se encuentra en :"<<min<<" con la edad:"<<edad[min]<<endl;
    
}