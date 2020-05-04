/*18) Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito perfeito quando ele é igual a soma dos seus divisores excetuando ele próprio. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores). A função deve retornar um valor booleano. */

#include <iostream>
#include <math.h>

using namespace  std;

void perfect(int n)
{
	int i,div, soma = 0;
	
	for(i = 1; i < n; i++)
	{
		div = n % i;
		
		if(div == 0)
		{
			soma = soma + i;
			
		}
	}
	
	if(soma == n)
	{
		cout << "o numero " << n <<" e Perfeito";
		
	}
	
	if(soma != n)
	{
		cout << "o numero " << n << " Nao e perfeito";
	}
	
}




int main(int argc, char** argv) 
{
	int n;
	cout << "digite um numero: ";
	cin >> n;
	
	
	perfect(n);
	
	
	return 0;
}
