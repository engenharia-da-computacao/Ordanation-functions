#include"recursos.h"

void vetAleatorio(int *p, int tam)
{
    int i;
    srand((unsigned) time(NULL));

    for(i = 0; i < tam; i++)
    {
        p[i] = rand()%100;
    }
}

void vetCrescente(int *p, int tam)
{
    int i;

    for(i = 0; i < tam; i++)
    {
        p[i] = i;
    }
}

void vetDecrescente(int *p, int tam){
    int i, j = tam;
    for(i = 0; i < tam; i++){
        p[i] = j--;
    }
}
// 1 crescente
// 2 decrescente
// n aleatorio
void escolheVetor(int *p,int aux,int tam){
	if(aux==1){
		vetCrescente(p,tam);
	}else if(aux==2){
		vetDecrescente(p,tam);
	}
	else if(aux == 3){
		vetAleatorio(p,tam);
	}
	else
	{
		printf("Valor Invalido!!\n");
	}
	
}
void escolheOrdenador(int *p,int y,int tam){
	if(y==1){
		insertionSort(p,tam);
	}else if(y==2){
		shellSort(p,tam);
	}
	else if(y == 3){
		quick(p,0,(tam-1));
	}
	else
	{
		printf("Valor Invalido!!\n");
	}
	
}
void opcoes(int tam,int x,int y)
{
    clock_t tempoinicial, tempofinal;//variaveis para o tempo
    double tempogasto;
    int *p, i;
     p = malloc(tam * sizeof(int));
    escolheVetor(p,x,tam);

    tempoinicial = clock();//variavel recebe o tempo de inicio

    escolheOrdenador(p,y,tam);

    tempofinal = clock();//tempo final tambem recebe inicio
    tempogasto = ((tempofinal - tempoinicial) * 1000/CLOCKS_PER_SEC);
	if(y==1)
	{
		if(x == 1)
		{
			printf("Tempo insertionSort gasto em segundos para numeros crescentes[%d]: [%.4f]\n", tam, tempogasto/1000);
		}
		else if(x == 2)
		{
			printf("Tempo insertionSort gasto em segundos para numeros decrescentes[%d]: [%.4f]\n", tam, tempogasto/1000);
		}
		else
		{
			printf("Tempo insertionSort gasto em segundos para numeros aleatorios[%d]: [%.4f]\n", tam, tempogasto/1000);
		}
	}
		
    	
	else if(y==2)
	{
		if(x == 1)
		{
			printf("Tempo shellSort gasto em segundos para numeros crescentes[%d]: [%.4f]\n", tam, tempogasto/1000);
		}
		else if(x == 2)
		{
			printf("Tempo shellSort gasto em segundos para numeros decrescentes[%d]: [%.4f]\n", tam, tempogasto/1000);
		}
		else
		{
			printf("Tempo shellSort gasto em segundos para numeros aleatorios[%d]: [%.4f]\n", tam, tempogasto/1000);
		}
	}
    	
	else
		{
			if(x == 1)
			{
				printf("Tempo quickSort gasto em segundos para numeros crescentes[%d]: [%.4f]\n", tam, tempogasto/1000);
			}
			else if(x == 2)
			{
				printf("Tempo quickSort gasto em segundos para numeros decrescentes[%d]: [%.4f]\n", tam, tempogasto/1000);
			}
			else
			{
				printf("Tempo quickSort gasto em segundos para numeros aleatorios[%d]: [%.4f]\n", tam, tempogasto/1000);
			}
		}
    
	free(p);
}
void shellSort(int* vet,int TAM) {
	int h = TAM / 2;
	int chave, j, i;
	while (h > 0) {
		for (i = h; i < TAM; i++) {
		chave = vet[i];
	   	j = i;
		while (j >= h && vet[j - h] > chave) {
	   	   	vet[j] = vet[j - h];
	   	   	j = j - h;
		}
		vet[j] = chave;
	}
	h = h / 2;
	}
}
void quick(int *vet, int esq, int dir){
	int pivo = esq, i, ch, j;
	for(i = esq + 1; i <= dir; i++)
	{
		j = i;
		if(vet[j] < vet[pivo]){
			ch = vet[j];
			while(j > pivo){
				vet[j] = vet[j-1];
				j--;
			}
			vet[j] = ch;
			pivo++;
		}	
	}
	if(pivo -1 >= esq){
			  quick(vet, esq, pivo -1);		
	}
	if(pivo +1 <= dir){
		quick(vet, pivo+1, dir);
	}
}
void insertionSort(int *vet, int TAM)
{
	int i, j, chave;
	for(j=1; j<TAM; j++)
	{
		chave = vet[j];
		i = j-1;
		while(i >= 0 && vet[i] > chave)
		{
			vet[i+1] = vet[i];
			i--;
		}
		vet[i+1] = chave;
	}
}


