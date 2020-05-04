	/*12) Leia uma matriz 10 x 10 e escreva a localização (linha e a coluna) do maior valor*/
	
	#include <iostream>
	#include <locale>

	using namespace  std;

	int main(int argc, char** argv) {	
	
	int maior = 0, i[2], j[2], a[10][10] = {{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,11,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10}};
	
	for(i[0] = 0;i[0] < 10;i[0]++ )
	{
		
		for(j[0] = 0;j[0] < 10;j[0]++)
		{
			
			if(a[i[0]][j[0]] > maior)
			{
					maior = a[i[0]][j[0]];
					i[1] = i[0];
					j[1] = j[0];	
			}	
		}
		if(j[0] == 10 && i[0] < 10)
		{
			j[0] = 0;
		}
	}

	cout << "O maior valor é [" << maior << "], e esta na Linha[" << i[1] << "] Coluna[" << j[1] << "].";
	
	return 0;
	
	};
