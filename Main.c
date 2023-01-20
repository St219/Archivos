#include <stdio.h>

int main(){

    FILE *archivo=NULL;
    char buffer[100];
    double pi;

    archivo=fopen("archivo.txt","r+");
    
    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }

   
    for (int i = 0; i < 3; i++)
    {
        fgets(buffer,100,archivo);
    printf("la  línea es %s",buffer);
    }
    

    fscanf(archivo, "%lf", &pi);
    printf("el número en la cuarta línea es %lf",pi);

    fprintf(archivo,"\n");

    fputs("se agrega una quinta línea",archivo);
 

    fclose(archivo);


    return 0;
}
