#include "recursos.h"

int main()
{
    int x = 0, y;

    while(x != 4){

        printf("---Menu---\n\n");
        printf("Vetor\n[1] -> Crescente\n[2] -> Decrescente\n[3] -> Aleatorio\n[4] -> SAIR\n");
        printf("Opcao:");
        scanf("%d", &x);

        if(x >= 4 || x <= 0)
        {
            break;
        }

        printf("Ordenador\n[1] -> InsertionSort\n[2] -> ShellSort\n[3] -> QuikSort\n");
        printf("Opcao:");
        scanf("%d", &y);

        printf("\n");
        
        if(y >= 4|| y <= 0)
        {
            break;
        }

        opcoes(10,x,y);
        opcoes(100,x,y);
        opcoes(1000,x,y);
        opcoes(10000,x,y);
        opcoes(100000,x,y);

    }

    /*printf("\n---InsertionSort(Aleatorio)---\n\n");
    blabla(10,3,1);
    blabla(100,3,1);
    blabla(1000,3,1);
    blabla(10000,3,1);
    blabla(100000,3,1);

    printf("\n\n");

    printf("\n---InsertionSort(Decrescente)---\n\n");

    blabla(10,2,1);
    blabla(100,2,1);
    blabla(1000,2,1);
    blabla(10000,2,1);
    blabla(100000,2,1);

    printf("\n\n");

    printf("\n---InsertionSort(Crescente)---\n\n");
    
    blabla(10,1,1);
    blabla(100,1,1);
    blabla(1000,1,1);
    blabla(10000,1,1);
    blabla(100000,1,1);
    
    
    printf("\n---ShellSort(Aleatorio)---\n\n");
    blabla(10,3,2);
    blabla(100,3,2);
    blabla(1000,3,2);
    blabla(10000,3,2);
    blabla(100000,3,2);

    printf("\n\n");

    printf("\n---ShellSort(Decrescente)---\n\n");

    blabla(10,2,2);
    blabla(100,2,2);
    blabla(1000,2,2);
    blabla(10000,2,2);
    blabla(100000,2,2);

    printf("\n\n");

    printf("\n---ShellSort(Crescente)---\n\n");
    
    blabla(10,1,2);
    blabla(100,1,2);
    blabla(1000,1,2);
    blabla(10000,1,2);
    blabla(100000,1,2);
   
    printf("\n---QuikSort(Aleatorio)---\n\n");
    blabla(10,3,3);
    blabla(100,3,3);
    blabla(1000,3,3);
    blabla(10000,3,3);
    blabla(100000,3,3);

    printf("\n\n");

    printf("\n---QuikSort(Decrescente)---\n\n");

    blabla(10,2,3);
    blabla(100,2,3);
    blabla(1000,2,3);
    blabla(10000,2,3);
    blabla(100000,2,3);

    printf("\n\n");

    printf("\n---QuikSort(Crescente)---\n\n");
    
    blabla(10,1,3);
    blabla(100,1,3);
    blabla(1000,1,3);
    blabla(10000,1,3);
    blabla(100000,1,3);*/
    
    return 0;
}
