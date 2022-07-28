void iniciar_matriz(char* mat){
    for(int i=0;i<23;i++){

           *(mat+i)=0;
       }


}

void agregar(char** mat1,char** mat2,int b,int i){

    for(int j=0;j<b;j++){
        *(*(mat2+i)+j)=*(*(mat1+i)+j);

    }

}
