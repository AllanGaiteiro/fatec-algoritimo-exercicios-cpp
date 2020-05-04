/*16) Faça um algoritmo que preencha uma matriz de inteiros 3×3 com valores aleatórios entre -50 e 50 e, através de uma função, retorne quantas vezes aparece o número zero.*/


	#include <iostream>
	#include <locale>

	using namespace  std;
	
	int check(int matriz[3][3])
	{
		int n;
			for(int i = 0; i < 3; i++)
			{
				for(int j = 0; j < 3; j++)
				{
					if(matriz[i][j] == 0)
					{
						n = n +1;
					}
					
				}
			}
		return n;
	}

	int main(int argc, char** argv) {
	
	int matriz[3][3];
	
	
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout << "digite numeros da Matriz de 0 a 50: ";
			cin >> matriz[i][j];
			cout << "MATRIZ["<< i << "]["<< j <<"]: "<<matriz[i][j]<< endl;
		}
	}
	
	cout << "o numero 0 apareceu:"<< check(matriz);
	
	
	
	
	
	return 0;
	
	};	 
