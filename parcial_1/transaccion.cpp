#include <iostream>

using namespace std;

void calendario(int** fecha,int a ){
    int **Aux= new int*[a];
    for(int i=0;i<a;i++){
        Aux[i]=new int[3];
    }
    for(int i = 0; i<a; i++){
        for(int j=0;j<3;j++){
            *(*(Aux+i)+j)= *(*(fecha+i)+j);
        }

     }
    for(int i=0;i<a;i++){
        delete[] fecha[i];
    }
    delete[] fecha;

    fecha=new int* [a];
    for(int i = 0; i<a; i++){
        for(int j=0;j<3;j++){
            *(*(fecha+i)+j)= *(*(Aux+i)+j);
        }
    }
    for(int i=0;i<a;i++){
        delete[] Aux[i];
    }
    delete[] Aux;

    Aux = nullptr;
    *(fecha+(a-1)) = new int[3];


        for(int j=0;j<3;j++){
            *(*(fecha+(a-1))+j)=0;
        }

        cout<<"por favor ingrese el dia de la transaccion: ";
        cin>>*(*(fecha+(a-1))+0);
        cout<<"por favor ingrese el mes de la transaccion: ";
        cin>>*(*(fecha+(a-1))+1);
        cout<<"por favor ingrese el año de la transaccion: ";
        cin>>*(*(fecha+(a-1))+2);

}
void tiempo(int** hora,int a);
void cantidad(int*valor,int a);
