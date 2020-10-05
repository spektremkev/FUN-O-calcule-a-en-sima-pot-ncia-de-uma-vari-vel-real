#include <stdio.h>
#include <stdlib.h>

/*
atividade 2_questão 5
*/

float potenciacao(float x,int n) {
	float resultado=1;
		for(int i=1 ; i <= n ; i++) { resultado = resultado * x ; }
			printf("\nResultado:  F(%.2f^%d) = (%.2f)", x,n,resultado);
}
	
int main(void)<%
	int n;
	float x;
	
		printf("Digite a base x: ");
			scanf( "%f",&x );
			
		printf("Digite o expoente n: ");
			scanf( "%d",&n );
	
				potenciacao(x,n);
%>
