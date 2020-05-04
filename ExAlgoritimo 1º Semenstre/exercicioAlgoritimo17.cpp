/*17) Faça uma função que recebe por parâmetro um valor inteiro e positivo e retorna o valor lógico Verdadeiro caso o valor seja primo e Falso em caso contrário.*/

#include <iostream>
#include <math.h>

using namespace  std;

void primo(int a)
{
	int n = 0, b;
	
	for(int i = 0;i < a ; i++)
	{
		b = a-i;
		if(a % b== 0)
		{
			n = n+1;
			 
		 }	
		
	}
	if(n == 2)
	{
		cout << "digite um numero: Verdadeiro" << endl;
	}else
	{
		cout << "digite um numero: Falso" << endl;
	}
	
}
int main(int argc, char** argv) {
	int a, ops;
	
	do{cout << "para sair digite o numero [0]" << endl;
		cout << "digite um numero: " << endl;
		cin >> a;
	
		primo(a);
		
	}while(a != 0);

	

	return 0;
}

