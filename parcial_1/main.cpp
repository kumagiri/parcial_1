#include <iostream>
#include "hmenus.h"
#include "usuarios.h"
#include "Transaccion.h"
using namespace std;

int main()
{
    /*int m=0;
    bool bandera1=false;
    while(bandera1==false){

        m=inicio();
        if(m==1){
        bool banderap1=false;
        int m1=0,c=0,d=0,e=0,h=0,l=0;
        char ** b=nullptr;

        b= new char*[c];
        for(int i=0;i<=c;i++){
            b[i]=new char[23];
        }
        while(banderap1==false){
             m1=mp1();
             if(m1==1){


                char **Aux= new char*[c];
                for(int i = 0; i<c; i++){
                     Aux[i]=b[i];
                 }
                delete[] b;
                c+=1;
                b=new char*[c];
                for(int i=0;i<c-1;i++){
                    b[i]=Aux[i];
                }
                delete[] Aux;
                Aux = nullptr;
                b[c-1] = new char[23];

                for(int i=0;i<23;i++){
                    *(*(b+(c-1))+i)=0;
                }
                cout<<"ingresa la nueva categoria"<<endl;
                cin>>b[c-1];



                 h++;


                 int e=0;
                 for(int i=0;i<23;i++){
                    if(*(*(b+(c-1))+i)!=0){
                                e++;

                    }

                 }

                 for(int i=0;i<h-1;i++){
                    l=0;
                    for(int j=0;j<e;j++){

                        if(*(*(b+(c-1))+j)==*(*(b+i)+j)){
                          l++;


                        }
                    }
                    if(l==e){
                      for(int i=0;i<e;i++){
                          b[c-1][i]=0;
                      }
                      delete[] b[c-1];
                      cout<<"La palabra que ingresaste esta repetida"<<endl;

                    }
                  }


              }


             else if(m1==2){
                 for (int i=0; i<c; i++){
                     cout << b[i];
                     cout << endl;
                 }
             }

             else if(m1==3){
                 banderap1=true;
            }
         }

        else if(m==2){
            bool banderap2=false;
            int m2=0,a=0,rep=0;

            int * cedulas=nullptr;
            char ** nombres=nullptr;
            char ** apellido=nullptr;
            char ** nacionalidad=nullptr;
            char ** telefono=nullptr;
            int * vive=nullptr;

            cedulas=new int[a];
            nombres= new char*[a];
            for(int i=0;i<=a;i++){
                nombres[i]=new char[15];
            }
            apellido= new char*[a];
            for(int i=0;i<=a;i++){
                apellido[i]=new char[15];
            }
            nacionalidad= new char*[a];
            for(int i=0;i<=a;i++){
                nacionalidad[i]=new char[10];
            }
            telefono= new char*[a];
            for(int i=0;i<=a;i++){
                telefono[i]=new char[11];
            }
            vive=new int[a];

            while(banderap2==false){
            m2=mp2();
            rep=0;

            if(m2==1){
                a++;
                cedula(cedulas,&a,&rep);


                if(rep!=1){
                    tel(telefono,a);
                    nom(nombres,a);
                    apell(apellido,a);
                    nacion(nacionalidad,a);
                    vida(vive,a);

                }
            }

            else if(m2==2){

                for(int i=0;i<a;i++){
                    cout<<i+1<<". cedula:"<<*(cedulas+i)<<"| nombre:"<<*(nombres+i)<<"| apellido:"<<*(apellido+i)<<"| nacionalidad:"<<*(nacionalidad+i)<<"| Actualmente vivo:";
                    if((*(vive+i))==1){
                        cout<<"si\n";

                    }
                    else if((*(vive+i))==2){
                        cout<<"no\n";
                    }
                    cout<<endl<<*(vive+i)<<endl;
                }

            }
            else if(m2==3){
                banderap2=true;
            }
            }
        }
        else if(m==3){*/
           int m3=0,a=1;
           bool banderap3=false;
           int ** fecha=nullptr,** hora=nullptr;
           int* valor=nullptr;

           fecha= new int*[a];
           for(int i=0;i<a;i++){
               fecha[i]=new int[3];
           }
           while(banderap3==false){
               m3=mp3();
               if(m3==1){
                   a++;
                   calendario(fecha,a);
                   int l=0;
                   for(int i = 0; i<a; i++){

                    cout<< *(*(fecha+i)+l)<<"/";
                    l++;
               }
                   cout<<endl;
              }
               else if(m3==2){
                   cout<<"menu 5"<<endl;
               }
               else if(m3==3){
                   banderap3=true;
               }
           }
        /*}
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
    }
    delete[] cedulas;
    for(int i=0;i<20;i++){
        delete[] nombres[i];
    }
    delete [] nombres;
    for(int i=0;i<20;i++){
        delete[] apellido[i];
    }
    delete [] apellido;
    for(int i=0;i<20;i++){
        delete[] nacionalidad[i];
    }
    delete [] nacionalidad;
    for(int i=0;i<20;i++){
        delete[] telefono[i];
    }
    delete [] telefono;
    delete [] vive;*/

    return 0;
}
