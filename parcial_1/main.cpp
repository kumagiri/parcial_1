#include <iostream>

using namespace std;

int main()
{
    int b=0,c=0;
    char a[10];
    char** registro=nullptr;
    char** registro2=nullptr;


    registro = new char*[1+c];
    for(int i=0;i<1+c;i++){
        cout<<"ingrse palabra: ";
        cin>>a;
        b=sizeof a;
        registro[i]=new char[b];

        registro[i]=a;
        cout<<registro[i]<<endl;
}
    for(int i=0;i<1+c;i++){
        delete[] registro[i];
    }
    delete[] registro;
    return 0;
}
