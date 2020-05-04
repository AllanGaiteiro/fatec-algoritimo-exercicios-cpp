	/*14) Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores elementos entre as primeiras */
	 
	
	#include <iostream>
	#include <locale>

	using namespace  std;

	int main(int argc, char** argv) {	

	int maior= 0, i, j, m=0, n=0, a[4][4] = {{10,12,14,16},{2,4,6,8},{26,28,30,32},{18,20,22,24}}, b[4][4] = {{9,11,13,15},{1,3,5,7},{25,27,29,31},{17,19,21,23}}, c[4][4];
	
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			if( a[i][j] > maior || b[i][j] > maior)
			{
				if(a[i][j] > b[i][j])
				{
					maior = a[i][j];
				}else
				{
					maior = b[i][j];
				}
			}
			
		}
		j=0;

	}
	for(m = 0; m < 4; m++)
	{
		for(n = 0; n < 4; n++)
		{
			for(i = 0; i < 4; i++)
			{
				for(j=0; j < 4; j++)
				{
					if(a[i][j] == maior )
					{	
						c[m][n] = a[i][j];
						
					}
					
					if(b[i][j] == maior)
					{	
						c[m][n] = b[i][j];
					
					}	
						
					
				}
			}
		maior = maior - 1;
		}
		
	}
	

	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			
			cout << "c [" << i << "],["<< j << "]: "<< c[i][j] << "/// ";
		}
		j=0;
	
	}	

		return 0;
	
	};
