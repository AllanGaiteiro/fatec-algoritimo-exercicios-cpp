	/*11) Ordenar, de modo crescente, um vetor com n elementos informados pelo usuário.*/ 
	
	#include <iostream>
	#include <locale>

	using namespace  std;

	int main(int argc, char** argv) {	
	
	int n,ops;
		
			cout << "digite o valor de elemento que tera os vetores: ";
			cin >> n;
	
		int i , a[n], b[n],maior = 0, m=0, c = 0;
	
		for(i = 0; i < n; i++)
		{
			
			cout << "digite o valor do elemento  A[" << i << "]: ";
			cin >> a[i];
					
			if(a[i] > maior)
			{
				maior = a[i];		
			}
			cout << "Valor de a[" << i << "]" << a[i] << "\n";
			
		}
	


	
		for(m = 0; m < n; maior--)
		{
			for(i=0; i < n; i++)
			{
				
				if(a[i] == maior)
				{
				
					b[(n-1)-m] = a[i];
					m++;
					cout << "Valor de M é "<<m<< endl;
					
				}
				
			}
		}

		for(i = 0; i < n;i++)
		{
			cout << "Valor do Vetor em ordem [" << i << "]" << b[i] << "; "<< endl;
		}
	
	cout << "Tenha um bom dia!!!";
	
	return 0;
	
	};
