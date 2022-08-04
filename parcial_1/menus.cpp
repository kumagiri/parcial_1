#include <iostream>

using namespace std;

int inicio(){
    int m=0;
    cout<<"bienvenido por favor seleccione una de \n"
          "las siguientes aplicaciones que quiere \n"
          "utilizar:\n"
          "1.aplicacion 1\n"
          "2.aplicacion 2\n"
          "3.aplicacion 3\n"
          "4.aplicacion 4\n"
          "5.aplicacion 5\n"
          "6.salir: ";
    cin>>m;
    return m;
}

int mp1(){
    int m1=0;
    cout<<" Aplicacion: listado de categorias que decea realizar: \n"
          "1.Agregar categoria\n"
          "2.visualizar mis categorias\n"
          "3.salir: ";
    cin>>m1;
    return m1 ;

}

int mp2(){
    int m2=0;
    cout<<" Aplicacion: Registro de usuarios que decea realizar: \n"
          "1.ingresar usuario\n"
          "2.visualizar usuarios\n"
          "3.salir: ";
    cin>>m2;
    return m2 ;

}
int mp3(){
    int m3=0;
    cout<<"Aplicacion: transacciones que decea realizar: \n"
          "1.registrar transaccion\n"
          "2.visualizar transacciones\n"
          "3.salir: ";
    cin>>m3;
    return m3 ;

}

