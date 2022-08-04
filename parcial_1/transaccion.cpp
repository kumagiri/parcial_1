#include <iostream>

using namespace std;

void calendario(int** fecha,int a ){

    int **Aux= new int*[a];
    for(int i = 0; i<a; i++){
         Aux[i]=fecha[i];
     }
    delete[] fecha;

    fecha=new int*[a];
    for(int i=0;i<a-1;i++){
        fecha[i]=Aux[i];
    }
    delete[] Aux;
    Aux = nullptr;
    fecha[a-1] = new int[3];


        cout<<"por favor ingrese el dia de la transaccion: ";
        cin>>*(*(fecha+(a-1))+0);
        cout<<"por favor ingrese el mes de la transaccion: ";
        cin>>*(*(fecha+(a-1))+1);
        cout<<"por favor ingrese el ano de la transaccion: ";
        cin>>*(*(fecha+(a-1))+2);

        cout<<*(*(fecha+(a-1))+0)<<"/"<<*(*(fecha+(a-1))+1)<<"/"<<*(*(fecha+(a-1))+2)<<endl;

}
void tiempo(int** hora,int a){
    int **Aux= new int*[a];
    for(int i = 0; i<a; i++){
         Aux[i]=hora[i];
     }
    delete[] hora;

    hora=new int*[a];
    for(int i=0;i<a-1;i++){
        hora[i]=Aux[i];
    }
    delete[] Aux;
    Aux = nullptr;
    hora[a-1] = new int[3];


        cout<<"por favor ingrese la hora de la transaccion: ";
        cin>>*(*(hora+(a-1))+0);
        cout<<"por favor ingrese los minutos de la transaccion: ";
        cin>>*(*(hora+(a-1))+1);
        cout<<"por favor escoja entre 1 para am y 2 para pm  la transaccion: ";
        cin>>*(*(hora+(a-1))+2);

        cout<<*(*(hora+(a-1))+0)<<"/"<<*(*(hora+(a-1))+1)<<"/"<<*(*(hora+(a-1))+2)<<endl;
}
void cantidad(int*valor,int a){

    int *aux= new int[a];
    for(int i=0;i<a;i++){
        *(aux+i)=*(valor+i);
    }
    delete[] valor;

    valor= new int [a];
    for(int i=0;i<(a-1);i++){
        *(valor+i)=*(aux+i);
    }
    delete[] aux;
    aux= nullptr;
    cout<<"Por favor ingrese 3l valor de la transaccion: ";
    cin>>*(valor+(a-1));
    cout<<*(valor+(a-1))<<endl;
}

void imprimir_fecha(int** fecha,int i){

cout<<"fecha:";
for(int j=0;j<3;j++){


   if(j==2){
       cout<<*(*(fecha+i)+j)<<"|";

    }
   else{
        cout<<*(*(fecha+i)+j)<<"/";
   }
}


}
void imprimir_hora(int** hora,int i){
    cout<<"hora:";
    for(int j=0;j<3;j++){
        if(j==0){
        cout<<*(*(hora+i)+j)<<":";
        }
        else if(j==1){
            cout<<*(*(hora+i)+j);
        }
        if(j==2){
            if(*(*(hora+i)+j)==1){
                cout<<" am |";
            }
            else if(*(*(hora+i)+j)==2){
                cout<<" pm |";
            }
        }
    }

}
void imprimir_valor(int* valor,int i){
cout<<"valor de la trasaccion: "<<*(valor+i);
}
