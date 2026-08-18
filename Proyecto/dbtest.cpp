#include <iostream>
#include "sqlite-poo/sqlite3.h"

using namespace std;
/*
int main(){
    char* err;
    string sql;
    char *insert;
    int rc;
    
    int ID = 0;
    int age;
    string name;
    string adress;
    float salary;
    sqlite3 *db;
    sqlite3_stmt* stmt;
    sqlite3_open_v2("Trabajadores.db",&db,SQLITE_OPEN_READWRITE | SQLITE_OPEN_CREATE,NULL);
    
    sql = "CREATE TABLE IF NOT EXISTS Trabajadores("  \
      "ID INT PRIMARY KEY     NOT NULL," \
      "NAME           TEXT    NOT NULL," \
      "AGE            INT     NOT NULL," \
      "ADDRESS        CHAR(50)," \
      "SALARY         REAL );";

    rc=sqlite3_exec(db,sql.c_str(),NULL,NULL, &err);
    if(rc != SQLITE_OK){
        cout<<"error:"<<err;
    }
    else{
        cout<<"\n Tabla creada correctamente \n";
    }
    /*cout<<"ingrese los datos:";
    cout<<"token:";
    cin>>ID;
    cout<<"\n nombre:";
    cin>>name;
    cout<<"\n edad:";
    cin>>age;
    cout<<"\n direccion:";
    cin>>adress;
    cout<<adress;
    cout<<"\n salario:";
    cin>>salary;
    sql ="INSERT INTO Trabajadores (ID,NAME,AGE) VALUES (?,?,?)";
    if(rc == SQLITE_OK){
    sqlite3_prepare_v2(db,sql.c_str(),-1,&stmt,NULL);
    sqlite3_bind_int(stmt,1,ID);
    sqlite3_bind_text(stmt,2,name.c_str(),name.length(),SQLITE_TRANSIENT);
    sqlite3_bind_int(stmt,3,age);
    sqlite3_step(stmt);
    }

    if(rc != SQLITE_OK){
        cout<<"error:"<<err;
    }
    else{
        cout<<"\n Datos ingresados correctamente \n";
    }*//*
    sql = "SELECT * FROM Trabajadores WHERE ID=1;";
    rc = sqlite3_prepare_v2(db, sql.c_str(), sql.length(), &stmt, NULL);
    if (rc != SQLITE_OK) {
    // handle the error
    }
    // Loop through the results, a row at a time.
    while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
    int sent = sqlite3_column_int(stmt, 0);
    string res2 = string ( reinterpret_cast< const char *> ( sqlite3_column_text ( stmt, 1 ) ) );
    int res3 = sqlite3_column_int(stmt,2);
    // etc.
    cout<<"result "<<sent;
    cout<<"res3: "<<res3;
    cout<<"res2: "<<res2;
    }
    sqlite3_finalize(stmt);
    sqlite3_close(db);
    return 0;
}*/

class prueba{
    int prueba1;
    float prueba2;
    string prueba3;
public:
    prueba();
    void metodo_prueba();
    int metodo2_prueba();
};

class test{
    int test2;
    float test3;
    string test4;
public:
    test();
    void metod_test(prueba pb);
    int metod2_test();
};

test::test(){
    test2 = 0;
    test3 = 0.0;
    test4 = "";
}
void test::metod_test(prueba pb){
    test3 =pb.metodo2_prueba();
    cout<<"test3:"<<test3;
}

int test::metod2_test(){
    test2 = 42;
    return test2;
}
prueba::prueba(){
    prueba1 = 0;
    prueba2 = 0.0;
    prueba3 = "";
}
void prueba::metodo_prueba(){
    cout<<"nada por mostrar";
}
int prueba::metodo2_prueba(){
    test t1;
    //int ret;
    prueba1 = t1.metod2_test();
    return prueba1;
}


int main(){
    int opcion;
    test ts;
    prueba pb;
    cout<<"opcion: ";
    cin>>opcion;
    switch (opcion)
    {
    case 1:
        ts.metod_test(pb);
        break;
    case 2:
        pb.metodo_prueba();
        break;
    default:
        break;
    }
    return 0;
}