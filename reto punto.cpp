#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#define NUM 100
#define TAM 30


typedef struct
{
    int CodIcancion;
    char Nombre[TAM];
    char NombreAlbum[TAM];
    int Numercantantes;
    char cantantesinvo[TAM];
    int numreproducciones;

}Kansion;


Kansion CapturaDatos();
void Todacancion(Kansion Array[], int Canciones);
int Popular(Kansion Array[],int Canciones);
int main()
{
    int K4nciones,P0pUlar;
Kansion Array[NUM]
    ;
    printf("cuantas canciones existe: ");
    scanf("%d",&K4nciones);

    printf("\n");

   Todacancion(Array,K4nciones);
  P0pUlar=Popular(Array,K4nciones);

    printf("\n");

 

    printf("Los datos de la cancion mas popular y reproducida es:\n");
    printf("El codigo de la cancion  %d \n",Array[P0pUlar].CodIcancion);
    printf("El nombre de la cancion %s \n",Array[P0pUlar].Nombre);
    printf("El nombre del album  %s \n",Array[P0pUlar].NombreAlbum);
    printf("El numero de cantantes  %d\n",Array[P0pUlar].Numercantantes);
    printf("Banda o cantante solicitado %s\n",Array[P0pUlar].cantantesinvo);
    printf("El numero de reproducciones de la cancion es: %d\n",Array[P0pUlar].numreproducciones);

}




Kansion Datos()
{
  Kansion C;
    
    printf("Ingresa el codigo de cancion ");
    scanf("%d",&C.CodIcancion);
    fflush(stdin);
    printf("Ingresa el nombre de la cancion ");
    gets(C.Nombre);
    printf("Ingresa el nombre del album ");
    fflush(stdin);
    gets(C.NombreAlbum);
    printf("Ingrese el numero de cantantes ");
    scanf("%d",&C.Numercantantes);
    fflush(stdin);
    printf("Ingrese el  nombre de canatante o cantantes ");
    gets(C.cantantesinvo);
    printf("Ingrese el numero de reproducciones ");
    scanf("%d",&C.numreproducciones);
    return(C);
}






void Todacancion(Kansion Array[], int kanciones)
{
    int i;
    for(i=0;i<kanciones;i++)
    {

        Array[i]=CapturaDatos();

    }
}









int Popular(Kansion Array[],int canciones)
{
    int i,aux=0, indPopular;
    for(i=0;i<canciones;i++)
    {
        if(Array[i].numreproducciones>aux)
        {
            aux=Array[i].numreproducciones;
            indPopular=i;
        }
    }
    return(indPopular);
}
