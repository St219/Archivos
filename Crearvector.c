#include <stdio.h>

int main(){
    int a;
    int b;
    int valor1;
    float valor11;
    float valor2;
    FILE *archivo=NULL;
    char buffer[100];
    int pi;

    archivo=fopen("vector.txt","w");
    
    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }

    for(int i=0; i<100; i+=3){
        fprintf(archivo,"%d\n",i);
    }
     archivo=fopen("hola.txt","w");
     for(int i=0; i<100; i+=3){
        fprintf(archivo,"%d\n",i);
         b=i%5;
        if (b==0){
             fprintf(archivo,"%d Es multiplo de 5\n ",i);
        }
        
    }
     fclose(archivo);
     return 0;
}