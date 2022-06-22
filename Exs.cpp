#include <stdio.h>
#include <string.h>
#include <locale.h>


int fibonacci(int valor)
{
	int i=0,i2=0,i3;
	while(i<valor)
	{
		if(i==0)
			i=i+1;
		else{
			i3=i;
			i=i+i2;
			i2=i3;
		}
		if(i==valor)

			return 0;	
	}
	
	return 1;	
}


int main ()
{
	setlocale(LC_ALL,"portuguese");
	
	//1
	int indice=13,soma=0,k=0;
	
	while(k<indice)
	{
		k++;
		soma=soma+k;
	}
	
	printf("Ao final do processamento, qual será o valor da variável SOMA?");
	printf(" %d\n",soma);
	printf("--------------\n");
	
	//2 - fibonacci
	int valor;
	
	printf("Fibonacci\n\nEntre com o valor:");
	
	scanf("%d",&valor);

	if((fibonacci(valor))==0)
		printf("%d pertence a sequência",valor);
	else
		printf("%d não pertence a sequência",valor);
	printf("\n--------------\n");
	
	//3 - dados json em python
	printf("O exercício 3 foi realizado em python\n");
	printf("--------------\n");
	
	//4 -  faturamento mensal - percentual
	float sp,rj,mg,es,outros,total;
	
	printf("Percentual de representação que cada estado teve dentro do valor total mensal da distribuidora\n");
	
	sp=67836.43;
	rj=36678.66;
	mg=29229.88;
	es=27165.48;
	outros=19849.53;
	
	total=sp+rj+mg+es+outros;
	printf("\nTotal %f - 100%%",total);
	printf("\nSP %f - %f%%",sp,((sp*100)/total));
	printf("\nRJ %f - %f%%",rj,((rj*100)/total));
	printf("\nMG %f - %f%%",mg,((mg*100)/total));
	printf("\nES %f - %f%%",es,((es*100)/total));
	printf("\nOutros %f - %f%%\n",outros,((outros*100)/total));
	printf("--------------\n");
	
	//5
	printf("Programa que inverte os caracteres");
	
	char string[1000];
    char invertida[1000];

	printf("\nDigite a string:");
    scanf("%s", string);

    int i,j = 1;
    for(i=0; i< strlen(string);i++) {
        invertida[i] = string[strlen(string)-j];
        j ++;
    }
    
    // Finaliza String
    invertida[i] = '\0';

    printf("%s", invertida); 
    return 0;
}
