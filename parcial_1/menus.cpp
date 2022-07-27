#include <iostream>

using namespace std;

int inicio(int* m){
    cout<<"bienvenido por favor seleccione una de \n"
          "las siguientes aplicaciones que quiere \n"
          "utilizar:\n"
          "1.aplicacion 1\n"
          "2.aplicacion 2\n"
          "3.aplicacion 3\n"
          "4.aplicacion 4\n"
          "5.aplicacion 5\n"
          "6.salir: ";
    cin>>*m;
    return *m;
}
