#include <iostream>

using namespace std;
void cedula (int* ced,int* ptra,int* ptrrep){

    int b=0;
    int *aux= new int[*ptra];
    for(int i=0;i<*ptra;i++){
        *(aux+i)=*(ced+i);
    }
    delete[] ced;

    ced= new int [*ptra];
    for(int i=0;i<(*ptra-1);i++){
        *(ced+i)=*(aux+i);
    }
    delete[] aux;
    aux= nullptr;
    cout<<"Por favor ingrese la cedula del usuario: ";
    cin>>b;
    if(*ptra!=1){
        for(int i=0;i<(*ptra-1);i++){
            if(*(ced+i)==b){

                cout<<"el usuario no es valido ya se encuentra registrado\n";
                *ptra-=1;
                *ptrrep=1;
            }
            else{
                 *(ced+(*ptra-1))=b;
            }
        }


    }
    else{
        *(ced+(*ptra-1))=b;
    }
}

void nom(char** nomb,int a){
    char **Aux= new char*[a];
    for(int i = 0; i<a; i++){
         Aux[i]=*(nomb+i);
     }
    delete[] nomb;

    nomb=new char* [a];
    for(int i=0;i<a-1;i++){
       *(nomb+i)=Aux[i];
    }
    delete[] Aux;
    Aux = nullptr;
    *(nomb+(a-1)) = new char[15];

    for(int i=0;i<15;i++){
        *(*(nomb+(a-1))+i)=0;
    }
    cout<<"ingresa el primer nombre del usuario"<<endl;
    cin>>*(nomb+(a-1));

}
void apell(char** ape,int a){
    char **Aux= new char*[a];
    for(int i = 0; i<a; i++){
         Aux[i]=*(ape+i);
     }
    delete[] ape;

    ape=new char* [a];
    for(int i=0;i<a-1;i++){
       *(ape+i)=Aux[i];
    }
    delete[] Aux;
    Aux = nullptr;
    *(ape+(a-1)) = new char[15];

    for(int i=0;i<15;i++){
        *(*(ape+(a-1))+i)=0;
    }
    cout<<"ingresa el primer apellido del usuario"<<endl;
    cin>>*(ape+(a-1));

}
void nacion(char ** nac, int a){

    char **Aux= new char*[a];
    for(int i = 0; i<a; i++){
         Aux[i]=*(nac+i);
     }
    delete[] nac;

    nac=new char* [a];
    for(int i=0;i<a-1;i++){
       *(nac+i)=Aux[i];
    }
    delete[] Aux;
    Aux = nullptr;
    *(nac+(a-1)) = new char[10];

    for(int i=0;i<10;i++){
        *(*(nac+(a-1))+i)=0;
    }
    cout<<"ingresa la nacionalidad del usurio"<<endl;
    cin>>*(nac+(a-1));
}
void tel(char** tele,int a){

    char **Aux= new char*[a];
    for(int i = 0; i<a; i++){
         Aux[i]=*(tele+i);
     }
    delete[] tele;

    tele=new char* [a];
    for(int i=0;i<a-1;i++){
       *(tele+i)=Aux[i];
    }
    delete[] Aux;

    *(tele+(a-1)) = new char[11];

    for(int i=0;i<11;i++){
        *(*(tele+(a-1))+i)=0;
    }
    cout<<"ingresa el telefono del usuario"<<endl;
    cin>>*(tele+(a-1));
}
void vida(int* vive,int a){

    int* aux = new int[a];
    for(int i=0;i<a;i++){
        *(aux+i)=*(vive+i);
    }
    delete[] vive;

    vive= new int [a];
    for(int i=0;i<(a-1);i++){
        *(vive+i)=*(aux+i);
    }
    delete[] aux;

    cout<<"el usuari aun vive 1 si 2 no: ";
    cin>>*(vive+a-1);

}
