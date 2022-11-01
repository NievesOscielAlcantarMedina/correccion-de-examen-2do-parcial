#include <stdio.h>
#include <stdlib.h>
#define TAM 5
void Bubble(int arr[]);
void muestra(int A[]);
int main()
{
    int arr[TAM]={1,2,3,4,5};
    printf("normal");
  muestra(arr);
    printf("\n");
     Bubble(arr);
    printf("descendente ");
    muestra(arr);

}

void  Bubble(int arr[])
{
    int i;
    int j;
    int camb;
    for(i=0;i<TAM-1;i++)
    {
        for(j=0;j<TAM-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                camb=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=camb;
            }
        }
    }
}
void Muestra(int A[])
{
    int j;
    for(j=0;j<TAM;j++)
    {
        printf("%d,",A[j]);
   }
}

