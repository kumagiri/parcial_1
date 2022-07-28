#include <iostream>
#include "hmenus.h"
#include "hlista_categorias.h"
using namespace std;

int main()
{
    /*int m=0;
    bool bandera1=false;
    while(bandera1==false){

        m=inicio();
        if(m==1){*/
        bool banderap1=false;
        int m1=0,b=0,c=1,d=0;
        char a[23];
        char** ma1=nullptr;
        char** ma2=nullptr;
        int* tamaños=nullptr;
        while(banderap1==false){
             m1=mp1();
             if(m1==1){
                 iniciar_matriz(a);
                 cout<<"Por favor ingrese la categoria que decea agregar\n";
                 cin>>a;

                 for(int i=0;i<23;i++){
                     if(a[i]==0){

                     }
                     else{
                         b++;
                     }
                 }
                 if(c==1){
                    ma1= new char*[c];
                    for(int i=0;i<c;i++){
                        ma1[i]=new char[b];
                    }
                    ma1[0]=a;
                    cout<<ma1[0]<<endl;
                    c++;
                    d=b;
                 }
                 else{
                     if(c%2==0){
                         ma2= new char*[c];
                         for(int i=0;i<c;i++){
                             ma2[i]=new char[tamaños[i]];
                         }
                        for(int i=0;i<c;i++){
                            if(i<c-1){
                                agregar(ma1,ma2,b,i);
                            }
                            else if(i==c-1){
                                ma2[i]=a;
                            }

                        }
                        cout<<ma2[0]<<endl<<ma2[1];

                     }
                     else{

                     }
                 }

             }
             else if(m1==2){
                 cout<<"visualizar"<<endl;
             }
             else if(m1==3){
                 cout<<"eliminar"<<endl;
             }
             else if(m1==4){
                 banderap1=true;
            }
         }
        /*}
        else if(m==2){
            cout<<"menu 2"<<endl;
        }
        else if(m==3){
            cout<<"menu 3"<<endl;
        }
        else if(m==4){
            cout<<"menu 4"<<endl;
        }
        else if(m==5){
            cout<<"menu 5"<<endl;
        }
        else if(m==6){
            bandera1=true;
        }
        else{
            cout<<"La opcion escogida no esta en las opciones"<<endl;
        }
    }*/
    return 0;
}
